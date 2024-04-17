#include <bits/stdc++.h>

using namespace std;

void solution(int n, vector < int >& a)
{
    int res = 0;
    for (int i = 1; i < n; ++i)
        for (int j = i + 1; j <= n; ++j)
            if (a[i] >= 1 && a[j] >= 1 && __gcd(a[i], a[j]) == 1)
                ++res;

    cout << res;
}

int main()
{
    int n;
    cin >> n;

    vector < int > a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    solution(n, a);

    return 0;
}