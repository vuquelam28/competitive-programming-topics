#include <iostream>

using namespace std;

main()
{
    long long n;
    cin >> n;

    int first_digit = 0;
    while (n > 0)
    {
        first_digit = n % 10;
        n /= 10;
    }

    cout << first_digit;

    return 0;
}