#include <bits/stdc++.h>
#define int long long

using namespace std;

int squared_sum(int n)
{
    return n * (n + 1) * (2 * n + 1) / 6LL;
}

main() 
{
    int ntest;
    cin >> ntest;

    while (ntest--)
    {
        int n;
        cin >> n;

        cout << squared_sum(n) << endl;
    }
}