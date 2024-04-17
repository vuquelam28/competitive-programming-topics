#include <bits/stdc++.h>

using namespace std;

typedef pair < int, int > II;

const int maxn = 1001;
const int step[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

int a[maxn][maxn], dp[maxn][maxn], visited[maxn][maxn];
vector < II > same_num[maxn * maxn];
vector < pair < int, II > > temp;

void enter(int &m, int &n, int &x, int &y, int &z, int &t)
{
    cin >> m >> n >> x >> y >> z >> t;

    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
            temp.push_back({a[i][j], {i, j}});
        }
}

bool valid(int x, int y, int m, int n)
{
    return (x > 0 && x <= m && y > 0 && y <= n && a[x][y] != 0 && !visited[x][y]);
}

void compress(int m, int n)
{
    sort(temp.begin(), temp.end());
    int max_discretized_value = 0;
    if (temp[0].first != 0)
        max_discretized_value = 1;
    a[temp[0].second.first][temp[0].second.second] = max_discretized_value;

    for (int i = 1; i < (int) temp.size(); ++i)
        if (temp[i].first != temp[i - 1].first)
            a[temp[i].second.first][temp[i].second.second] = ++max_discretized_value;
        else 
            a[temp[i].second.first][temp[i].second.second] = max_discretized_value;
}

// Dựng đồ thị mới bằng danh sách kề dựa trên ma trận đã rời rạc hóa.
void build_graph(int m, int n)
{
    // Rời rạc hóa các số trong ma trận.
    compress(m, n);

    // Dựng thêm danh sách kề phụ với mỗi đỉnh a[i][j] bao gồm các đỉnh có cùng số với nó.
    for (int i = 1; i <= m; ++i)    
        for (int j = 1; j <= n; ++j)
            same_num[a[i][j]].push_back({i, j});
}

// Dùng BFS tìm đường đi ngắn nhất từ (x, y) tới (z, t) trên đồ thị đã dựng.
void bfs(int m, int n, int x, int y, int z, int t)
{
    queue < II > vertexes;
    vertexes.push({x, y});
    visited[x][y] = true;
    dp[x][y] = 0;

    while (!vertexes.empty())
    {
        II cur = vertexes.front();
        vertexes.pop();

        if (cur.first == z && cur.second == t)
        {
            cout << dp[cur.first][cur.second];
            return;
        }

        for (int i = 0; i < 4; ++i)
        {
            int next_x = cur.first + step[i][0], next_y = cur.second + step[i][1];
            if (valid(next_x, next_y, m, n))
            {
                visited[next_x][next_y] = true;
                dp[next_x][next_y] = dp[cur.first][cur.second] + 1;

                vertexes.push({next_x, next_y});
            }
        }

        // Thử di chuyển vào các ô có chung số với ô hiện tại.
        for (auto v: same_num[a[cur.first][cur.second]])
            if (!visited[v.first][v.second])
            {
                visited[v.first][v.second] = true;
                dp[v.first][v.second] = dp[cur.first][cur.second] + 1;

                vertexes.push(v);
            }

        same_num[a[cur.first][cur.second]].clear();
    }

    cout << -1;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n, x, y, z, t;

    enter(m, n, x, y, z, t);
    build_graph(m, n);
    bfs(m, n, x, y, z, t);

    return 0;
}