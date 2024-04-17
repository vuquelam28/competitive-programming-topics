#include <bits/stdc++.h>
#define int long long
#define task "Bridge."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxn = 200;
int X, A, Y, B, M;

void enter()
{
    cin >> X >> A >> Y >> B >> M;
}

void solution()
{
    int l = min(A, B); // Độ rộng nhỏ nhất có thể của cây cầu.
    int r = X * A + Y * B; // Độ rộng lớn nhất có thể.
    int max_bridge_width = 0;

    while (l <= r)
    {
        int mid = (l + r) >> 1; // Thử xây một cây cầu có các hàng đều có độ rộng lớn hơn hoặc bằng mid.

        vector < vector < int > > dp(maxn + 1, vector < int > (maxn + 1, 0));
        for (int i = 1; i <= X; ++i)
            dp[i][0] = i / ((mid + A - 1) / A); // Số hàng tối đa nếu chỉ dùng i khúc loại A.
        for (int j = 1; j <= Y; ++j)
            dp[0][j] = j / ((mid + B - 1) / B); // Số hàng tối đa nếu chỉ dùng j khúc loại B.

        for (int i = 1; i <= X; ++i)
            for (int j = 1; j <= Y; ++j)
            {
                // Thử xây 1 hàng dùng k khúc gỗ loại A.
                for (int k = 1; k <= i; ++k)
                {
                    int t = max((mid - k * A + B - 1) / B, 0LL); // Phải dùng thêm t khúc gỗ loại B để ghép hàng này.

                    if (t > j) // Nếu số lượng khúc gỗ loại B cần dùng lớn hơn trạng thái j hiện tại -> bỏ qua.
                        continue;

                    dp[i][j] = max(dp[i][j], dp[i - k][j - t] + 1);
                }
            }

        if (dp[X][Y] >= M) // Nếu dùng X khúc loại A và Y khúc loại B xây được cầu có số hàng >= M -> Tăng độ rộng cầu.
        {
            max_bridge_width = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << max_bridge_width;
}

main()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}


