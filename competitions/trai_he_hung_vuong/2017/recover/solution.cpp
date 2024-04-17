#include <bits/stdc++.h>
#define int long long
#define task "Recover."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxN = 5010, mod = 2017;
string s;
int N, dp[maxN][maxN], sum[maxN][maxN], max_equal[maxN][maxN];

void enter()
{
    cin >> s;
}

inline int add(int x, int y)
{
    return (x + y) % mod;
}

/* Tiền xử lý:
   - Đặt max_equal[i][j]: Độ dài L lớn nhất sao cho xâu có độ dài L bắt đầu từ i bằng xâu có độ dài L bắt đầu từ j. Nói
     cách khác là s[i...(i + L - 1)] = s[j...(j + L - 1)]. Khi so sánh hai xâu s[j...i] và s[p...(j - 1)], chỉ cần xét
     hai kí tự khác nhau đầu tiên giữa chúng để so sánh. Kí tự đó sẽ là s[j + L] và s[p + L].
   - Công thức quy hoạch động: Xét i từ N về 1, j từ N về i + 1:
     + Nếu s[i] = s[j]: max_equal[i][j] = max_equal[i + 1][j + 1] + 1.
     + Nếu s[i] != s[j]: max_equal[i][j] = 0.
*/
void first_process()
{
    s = '0' + s;
    N = s.size() - 1;

    for (int i = N; i >= 1; --i)
        for (int j = N; j > i; --j)
            max_equal[i][j] = (s[i] == s[j]) ? max_equal[i + 1][j + 1] + 1 : 0;
}

void solution()
{
    /*
      Đặt dp[i][j]: Số cách chia đoạn từ 1 tới i với xâu cuối cùng là s[j...i] để thu được một dãy tăng.
      Công thức: dp[i][j] = Tổng (dp[j - 1][k]) thỏa mãn:
                 + s[k...(j - 1)] < s[j...i].
                 + s[j] != "0".
                 + j - (i - j + 1) <= k <= j - 1. Nếu k < j - (i - j + 1) thì s[k...(j - 1)] luôn lớn hơn s[j...i].
    */
    dp[1][1] = 1;
    sum[1][1] = 1; // Cộng dồn tổng các giá trị dp[i][j] trên hàng i. Sử dụng để tính nhanh dp[i][j].

    for (int i = 2; i <= N; ++i)
    {
        dp[i][1] = 1;

        for (int j = 2; j <= i; ++j)
        {
            if (s[j] == '0')
                continue;

            int cur_L = i - j + 1, pre_pos = j - cur_L;

            if (pre_pos <= 0)
                dp[i][j] = sum[j - 1][1];
            else
            {
                // Chỉ cần xét xâu s[(j - cur_L)...(j - 1)] và xâu s[j...i], vì các xâu độ dài lớn hơn (j - i + 1) đều
                // sẽ chắc chắn lớn hơn xâu [j...i], nên không cần phải xét đến làm gì.
                // Nếu xâu s[(j - cur_L)...(j - 1)] < s[j...i] thì có thêm số cách chia bằng dp[j - 1][j - cur_L].
                int max_len = max_equal[pre_pos][j];
                if (max_len < cur_L && s[pre_pos + max_len] < s[j + max_len])
                    dp[i][j] = add(dp[i][j], dp[j - 1][pre_pos]);

                /* Nhận xét
                  Với các vị trí k mà: j - cur_L < k <= j - 1 thì chắc chắn s[k...(j - 1)] < s[j...i], do đó ta sẽ tính
                  luôn tổng của các dp[j - 1][k] đó bằng mảng cộng dồn ở hàng thứ j - 1 trên bảng phương án dp.
                */
                dp[i][j] = add(dp[i][j], sum[j - 1][pre_pos + 1]);
            }
        }
        /*
          Cộng dồn hàng thứ i của mảng dp[i][j] vừa tính xong: sum[i][j] = tổng từ dp[i][i] về dp[i][j] (0 < j <= i).
          Lưu ý, ở đoạn này ta sẽ tính ngược để khi tính tổng đoạn dp[j - 1][j - 1] -> dp[j - 1][pre_pos + 1] không cần
          phải làm phép trừ, tránh việc xuất hiện số âm do phép trừ trên các lớp đồng dư. Nếu bạn nào xây dựng mảng
          cộng dồn xuôi vẫn được, nhưng sẽ phải xử lý phép trừ trên các lớp đồng dư theo module 2017.
        */
        for (int j = i; j >= 1; --j)
            sum[i][j] = add(sum[i][j + 1], dp[i][j]);
    }

    // Kết quả cuối cùng là tổng (dp[N][j]), j = [1...N].
    int res = 0;
    for (int j = 1; j <= N; ++j)
        res = add(res, dp[N][j]);

    cout << res;
}

main()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    first_process();
    solution();

    return 0;
}


