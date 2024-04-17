#include <bits/stdc++.h>
#define int long long

using namespace std;
typedef int arr[10];

arr x;
int res;

void enter(string &s, int &m)
{
    cin >> s >> m;
}

bool check(string &s, int n, arr x, int m)
{
    int number = 0; // Biến lưu từng số trong chuỗi.
    int sum = 0; // Tổng biểu thức.
    int sign = 1; // Biến lưu dấu của từng số tách ra trong chuỗi.

    for (int i = 0; i <= n; ++i)
        if (x[i] == 0)
            number = number * 10 + (s[i] - '0');
        else if (x[i] == 1)
        {
            sum = sum + sign * number;
            number = (s[i] - '0');
            sign = 1;
        }
        else
        {
            sum = sum + sign * number;
            number = (s[i] - '0');
            sign = -1;
        }

    sum = sum + sign * number;

    return (sum == m);
}

void backtrack(string s, int i, int n, int m)
{
    if (i > n)
    {
        res += check(s, n, x, m);
    }
    else
    {
        for (int j = 0; j <= 2; ++j)
        {
            // Không xét trường hợp điền dấu + vào trước kí tự s[1].
            if (i == 0 && j == 1)
                continue;

            x[i] = j;

            backtrack(s, i + 1, n, m);
        }
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int m;
    enter(s, m);

    backtrack(s, 0, s.size() - 1, m);

    if (!res)
        res = -1;

    cout << res;

    return 0;
}
