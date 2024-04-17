#include <iostream>

using namespace std;

main()
{
    int n;
    cin >> n;
    
    int max_digit = 0;
    while (n > 0)
    {
        int d = n % 10;
        
        if (max_digit < d)
            max_digit = d;
        
        n = n / 10;
    }
    
    cout << max_digit;
    
    return 0;
}