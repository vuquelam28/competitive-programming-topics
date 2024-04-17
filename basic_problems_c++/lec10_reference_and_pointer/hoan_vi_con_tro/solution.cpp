#include <iostream>

using namespace std;

void hoan_vi(long long* x, long long* y)
{
    long long temp = *x;
    *x = *y;
    *y = temp;
}

main()
{
    long long a, b;
    cin >> a >> b;

    hoan_vi(&a, &b);
    cout << a << ' ' << b;

    return 0;
}