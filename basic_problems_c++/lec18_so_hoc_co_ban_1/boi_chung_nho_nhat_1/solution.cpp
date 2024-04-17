#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long b;
    cin >> b;

    int res = 0;
    for (long long i = 1; i * i <= b; ++i)
        if (b % i == 0)
        {
            ++res;
            res += (b / i != i);
        }
    
    cout << res;

    return 0;
}