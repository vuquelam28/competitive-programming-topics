#include <iostream>

using namespace std;

int main()
{   
    long long n;
    cin >> n;

    if (n == 1)
        cout << 0;
    else 
    {
        int res = 0;
        while (n > 1)
            n /= 2, ++res;

        cout << res;
    }

    return 0;
}