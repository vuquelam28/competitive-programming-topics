#include <bits/stdc++.h>
#define int long long
#define task "fixing_road."
#define inf 1e9 + 7
#define x first
#define y second
 
using namespace std;
 
const int maxn = 1e5 + 10;
int n, original_roughness, t[maxn];
 
void enter()
{
    cin >> n;
 
    for (int i = 1; i <= n; ++i)
        cin >> t[i];
 
    for (int i = 1; i <= n; ++i)
        original_roughness += (t[i] != t[i - 1]);
}
 
void answer_query(int u, int v)
{
    if (u == 1) // Nếu thay đổi đoạn đường thứ nhất.
    {
        if (t[u] == t[u + 1] && v != t[u + 1])
            ++original_roughness;
        else if (t[u] != t[u + 1] && v == t[u + 1])
            --original_roughness;
    }
    else if (u == n) // Nếu thay đổi đoạn đường thứ n.
    {
        if (t[u] == t[u - 1] && v != t[u - 1])
            ++original_roughness;
        else if (t[u] != t[u - 1] && v == t[u - 1])
            --original_roughness;
    }
    else // Nếu thay đổi một đoạn đường ở giữa (1, n).
    {
        // Nếu u - 1 và u + 1 thuộc cùng một loại nhựa.
        if (t[u - 1] == t[u + 1])
        {
            // Nếu u - 1, u và u + 1 thuộc cùng một phần đường rồi thay
            // đổi u thành loại nhựa khác thì độ gập ghềnh tăng thêm 2.
            if (t[u] == t[u - 1] && v != t[u - 1])
                original_roughness += 2;
            // Nếu u - 1 thuộc một phần đường, u thuộc một phần đường và
            // u + 1 thuộc phần đường giống với u - 1, rồi thay đổi u thành
            // cùng loại với hai đầu thì độ gập ghềnh giảm đi 2.
            else if (t[u] != t[u - 1] && v == t[u - 1])
                original_roughness -= 2;
        }
        // Nếu u - 1 và u + 1 thuộc hai loại nhựa khác nhau.
        else
        {
            // Nếu u cùng loại nhựa với u - 1 hoặc u + 1 nhưng lại bị phủ lên loại nhựa mới
            // khác với ban đầu và khác với đầu còn lại thì độ gập ghềnh sẽ tăng thêm 1.
            if ((t[u] == t[u - 1] && v != t[u - 1] && v != t[u + 1])
                || (t[u] == t[u + 1] && v != t[u + 1] && v != t[u - 1]))
                ++original_roughness;
            // Nếu u khác loại với cả u - 1 và u + 1, rồi phủ lên loại mới bằng một trong
            // hai loại ở hai bên, thì độ gập ghềnh giảm đi 1.
            else if (t[u] != t[u + 1] && t[u] != t[u - 1]
                     && (v == t[u - 1] || v == t[u + 1]))
                --original_roughness;
        }
    }
 
    t[u] = v;
 
    cout << original_roughness << endl;
}
 
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    enter();
 
    int q;
    cin >> q;
 
    while (q--)
    {
        int u, v;
        cin >> u >> v;
 
        answer_query(u, v);
    }
 
    return 0;
}