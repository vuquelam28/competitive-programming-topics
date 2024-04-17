#include <iostream>

using namespace std;

main()
{
    int n;
    cin >> n;
    
    int f = 0, k = 1;
    while (f <= n)
    {
        if (k % 2 == 1)
            f -= k;
        else 
            f += k;
        
        k = k + 1;
    }
    
    cout << k - 1;
    
    return 0;
}