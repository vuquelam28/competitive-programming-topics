#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 101, maxm = 801, inf = 1e9;
int n, weight_cage[maxn][maxn], cnt_belong[maxm][maxm], cage_num[maxm][maxm], d[maxn];
bool is_free[maxn];
struct wallType
{
    int conner1, conner2;
    int weight;
};
vector < wallType > wall_list;

void enter_and_build_new_graph()
{
    cin >> n;

    for (int u = 1; u <= n + 1; ++u)
    {
        fill(weight_cage[u] + 1, weight_cage[u] + 2 + n, inf);
        weight_cage[u][u] = 0;
    }

    for (int i = 1; i <= n; ++i)
    {
        int m;
        cin >> m;

        vector < int > cage_conner;
        cage_conner.resize(m + 1);
        for (int j = 1; j <= m; ++j)
            cin >> cage_conner[j];

        for (int j = 1; j <= m; ++j)
        {
            int u = cage_conner[j], v = (j == m) ? cage_conner[1] : cage_conner[j + 1]; // Tường nối hai góc (u, v).
            bool belong_to_some_cage = false;

            int weight_wall; // Độ kiên cố của bức tường nối 2 góc (u, v) của chuồng thứ i.
            cin >> weight_wall;

            /*
               Nếu cạnh nối hai góc (u, v) của chuồng i cũng là cạnh của một chuồng nào đó trước đó, thì đây là một cạnh
               chung của hai chuồng. Lúc này ta sẽ minimize trọng số của cạnh nối giữa hai chuồng này bằng giá trị kiên
               cố nhỏ nhất trong các vách ngăn chung.
            */

            if (cage_num[u][v] || cage_num[v][u])
            {
                int prevCage = cage_num[u][v];

                weight_cage[i][prevCage] = weight_cage[prevCage][i] = min(weight_cage[i][prevCage], weight_wall);
                belong_to_some_cage = true;

                // Tăng số chuồng mà bức tường (u, v) thuộc vào.
                cnt_belong[u][v]++;
                cnt_belong[v][u]++;
            }

            // Nếu bức tường này chưa thuộc về chuồng nào trước đó, ta sẽ coi như nó thuộc chuồng thứ i.
            if (!belong_to_some_cage)
            {
                cage_num[u][v] = cage_num[v][u] = i;
                cnt_belong[u][v] = 1;
                cnt_belong[v][u] = 1;

                wall_list.push_back({u, v, weight_wall});
            }
        }
    }
}

int prim(int nvertex) // Giải thuật prim xây dựng cây khung nhỏ nhất của đồ thị mới.
{
    fill(d + 1, d + 1 + nvertex, inf);
    fill(is_free + 1, is_free + 1 + nvertex, true);
    d[1] = 0;

    for (int step = 1; step <= nvertex; ++step)
    {
        int u = 0, mind = inf;

        for (int v = 1; v <= nvertex; ++v)
            if (is_free[v] && d[v] < mind)
            {
                u = v;
                mind = d[v];
            }

        if (u == 0) // Đồ thị mới không liên thông -> Không có cách nào phá chuồng để các con bò tới cùng 1 chuồng.
            return inf;

        is_free[u] = false;

        for (int v = 1; v <= nvertex; ++v)
            if (is_free[v] && d[v] > weight_cage[u][v])
                d[v] = weight_cage[u][v];
    }

    int spanning_tree_weight = 0;
    for (int u = 1; u <= nvertex; ++u)
        if (d[u] != inf)
            spanning_tree_weight += d[u];

    return spanning_tree_weight;
}

void solution()
{
    /* Solution:
       - Đồ thị hóa dữ liệu bài toán như sau: Coi mỗi chuồng là một đỉnh, các vách ngăn là cạnh nối giữa các đỉnh. Nếu
       2 chuồng có nhiều vách ngăn thì chọn vách ngăn có độ kiên cố thấp nhất. Coi khu vực bên ngoài các chuồng là đỉnh
       thứ n + 1, cạnh nối nó với các chuồng khác bằng vách ngăn có độ kiên cố thấp nhất.
       - Có 2 cách để các con bò phá chuồng: Một là phá vách ngăn để cùng tới một chuồng nào đó, hai là phá vách ngăn
       để cùng ra bên ngoài. Như vậy ta có thể sử dụng giải thuật Prim với n đỉnh và n + 1 đỉnh, lấy min trong hai cách
       này để đưa ra kết quả cuối cùng.
    */
    for (int i = 0; i < wall_list.size(); ++i)
    {
        int u = wall_list[i].conner1, v = wall_list[i].conner2, w = wall_list[i].weight;

        /*
          Bức tường nối hai góc (u, v) của chuồng này chỉ thuộc mình chuồng đó, tức là bức tường này ngăn cách chuồng
          với phần bên ngoài (coi là đỉnh (n + 1) của đồ thị). Minimize trọng số của chuồng chứa nó với đỉnh bên ngoài.
          Ta sẽ thu được thêm 1 đỉnh (n + 1) với trọng số nối đến mỗi đỉnh bằng bức tường có độ kiên cố thấp nhất ngăn
          cách chúng với nhau.
        */
        if (cnt_belong[u][v] == 1)
        {
            int cur_cage = cage_num[u][v];
            weight_cage[cur_cage][n + 1] = weight_cage[n + 1][cur_cage] = min(weight_cage[cur_cage][n + 1], w);
        }
    }

    cout << min(prim(n), prim(n + 1));
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter_and_build_new_graph();
    solution();

    return 0;
}