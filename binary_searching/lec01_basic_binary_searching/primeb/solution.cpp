#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 3e7, maxgt = 1e9;
int n, ntest, d, d1, d2, c[maxn + 10], pr[maxn + 10], square[maxn + 10], power[maxn + 10];

void eratosthenes()
{
    c[0] = c[1] = 1;
    for (int i = 2; i * i <= maxn; ++i)
        if (!c[i])
            for (int j = i * i; j <= maxn; j += i) c[j] = 1;

    for (int i = 2; i <= maxn; ++i)
        if (!c[i])
        {
            pr[++d] = i;

            if (i * i <= maxgt) 
                square[++d1] = i;
            if (i * i * i <= maxgt) 
                power[++d2] = i;
        }
}

int sqr(int A) 
{ 
    return A * A; 
}

int cubed(int A) 
{ 
    return A * A * A; 
}

void solution(int n)
{
    int res = 0;
    for (int i = 1; i <= d2 && cubed(power[i]) <= n; ++i)
        for (int j = 1; j <= d1 && sqr(square[j]) <= (n / cubed(power[i])); ++j)
            if (power[i] != square[j] && cubed(power[i]) * sqr(square[j]) <= n)
            {
                int temp = n / (cubed(power[i]) * sqr(square[j]));
                
                // Tìm kiếm nhị phân trên mảng pr chứa các giá trị P: Vị trí pos lớn nhất sao cho pr[pos] <= temp.
                int pos = upper_bound(pr + 1, pr + 1 + d, temp) - pr - 1; 
                if (pos <= d)
                {
                    if (pr[pos] >= power[i]) res--;
                    if (pr[pos] >= square[j]) res--;

                    res += (long long) pos;
                }
            }

    cout << res << endl;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    eratosthenes();

    int ntest;
    cin >> ntest;

    while (ntest--) 
    {
        int n;
        cin >> n;

        solution(n);
    }

    return 0;
}