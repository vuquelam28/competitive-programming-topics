#include <iostream>

using namespace std;

bool check(int n)
{
    if (n == 0)
        return true;

    while (n > 0)
    {
        if ((n % 10) % 2 == 1)
            return false;

        n /= 10;
    }

    return true;
}

main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (check(n))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}