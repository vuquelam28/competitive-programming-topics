#include <iostream>

using namespace std;

bool is_prime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i < n; ++i)
        if (n % i == 0)
            return false;

    return true;
}

int find_maximum_prime_divisor(int n)
{
    for (int i = n; i >= 1; --i)
        if (n % i == 0 && is_prime(i))
            return i;
}

main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << find_maximum_prime_divisor(n) << endl;
    }

    return 0;
}