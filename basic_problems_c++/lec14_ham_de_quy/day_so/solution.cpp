#include <bits/stdc++.h> // Khai báo luôn các thư viện cho ngắn gọn.
using namespace std;

long long number(long long N, long long a0, long long a1)
{
    if (N == 0)
        return a0;
    else if (N == 1)
        return a1;
    else
        return 2 * number(N - 1, a0, a1) - 3 * number(N - 2, a0, a1);
}

int main()
{
    freopen("main.inp", "r", stdin);
    freopen("main.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    long long a0, a1, N;
    cin >> a0 >> a1;
    cin >> N;

    cout << number(N, a0, a1);
}
