#include <bits/stdc++.h>
#define int long long
#define task "FriendPair."

using namespace std;
const int maxn = 10;
int n, k, num, res, d[maxn], chosen[maxn];
unordered_map < int, int > mark;

void enter()
{
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
        cin >> d[i];
}

void check_solution(int num)
{
    // Nếu num đã xuất hiện trong tập kết quả rồi thì không xét nữa.
    if (mark[num])
        return;

    // Chữ số cuối của num là 0, khiến cho số đảo của nó không đủ k chữ số, cũng không xét.
    if (num % 10 == 0)
        return;

    // Tìm số đảo và tính ước chung lớn nhất của hai số.
    int inverse_num = 0, tmp = num;
    while (tmp > 0)
    {
        inverse_num = inverse_num * 10 + (tmp % 10);
        tmp /= 10;
    }

    if (__gcd(num, inverse_num) == 1)
    {
        ++res;
        mark[num] = 1;
        mark[inverse_num] = 1;
    }
}

// Quay lui sinh các hoán vị độ dài k của n.
void backtrack(int i)
{
    for (int j = 1; j <= n; ++j)
        if (!chosen[j])
        {
            if (i == 1 && d[j] == 0)
                continue;

            num = num * 10 + d[j];
            chosen[j] = 1;

            if (i == k)
                check_solution(num);
            else
                backtrack(i + 1);

            chosen[j] = 0;
            num /= 10;
        }
}

void solution()
{
    if (n < k)
    {
        cout << 0;
        return;
    }
    
    backtrack(1);

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}