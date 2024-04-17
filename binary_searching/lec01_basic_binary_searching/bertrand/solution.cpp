#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 6e6;
int d;
int c[maxn + 10], prime[500000];

void eratosthenes()
{
    c[0] = c[1] = 1;
    for (int i = 2; i * i <= maxn; ++i)
        if (!c[i])
            for (int j = i * i; j <= maxn; j += i) 
                c[j] = 1;
                
    for (int i = 2; i <= maxn; ++i)
        if (!c[i]) 
            prime[++d] = i;
}

void solution(int n)
{
    int l = upper_bound(prime + 1, prime + 1 + d, n) - prime;
    int r = lower_bound(prime + 1, prime + 1 + d, 2 * n) - prime - 1;
    if (l > 0 && r > 0) 
        cout << r - l + 1 << '\n';
    else
        cout << 0 << '\n';
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    eratosthenes();

    int n;
    while (cin >> n) 
        solution(n);

    return 0;
}