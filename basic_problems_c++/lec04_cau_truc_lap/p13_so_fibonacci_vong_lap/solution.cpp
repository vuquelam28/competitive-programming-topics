#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if (n <= 1)
        cout << n;
    else 
    {
        long long f0 = 0, f1 = 1, fn = 0;    
        for (int i = 2; i <= n; ++i)
        {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        
        cout << fn;
    }
    
    return 0;
}