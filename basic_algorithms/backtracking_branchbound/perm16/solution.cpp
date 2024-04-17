#include <bits/stdc++.h>
#define int long long

using namespace std;

const int mod = 1e9 + 7;

bool check_mod_16(int postfix)
{
    return (postfix % 16 == 0);
}

void backtrack(int postfix, int n, int used_numbers, vector < int > &used,  int &res)
{
    if (used_numbers == 4)
    {
        res += check_mod_16(postfix);
        return;
    }

    for (int i = 1; i <= n; ++i)
        if (!used[i])
        {
            postfix = (i < 10) ? postfix * 10 + i : postfix * 100 + i;
            ++used_numbers;
            used[i] = 1;

            backtrack(postfix, n, used_numbers, used, res);

            postfix = (i < 10) ? postfix / 10 : postfix / 100;
            --used_numbers;
            used[i] = 0;
        }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int factorial = 1;
    for (int i = 1; i <= n - 4; ++i)
        (factorial *= i) %= mod;

    int res = 0, used_numbers = 0, postfix = 0;
    vector < int > used(n + 1, 0);
    backtrack(postfix, n, used_numbers, used, res);

    cout << (res * factorial) % mod;

    return 0;
}


