#include <bits/stdc++.h>
#define int long long 

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    int x, n; 
    cin >> x >> n;

    int odd = 1;
    if ((x % 2 + 2) % 2 == 1)
        odd = -1;

    if (n % 4 == 0)
        cout << x << '\n';
    else if (n % 4 == 1)
        cout << x - n * odd << '\n';
    else if (n % 4 == 2)
        cout << x + 1 * odd << '\n';
    else
        cout << x + (n + 1) * odd << '\n';

    return 0;
}