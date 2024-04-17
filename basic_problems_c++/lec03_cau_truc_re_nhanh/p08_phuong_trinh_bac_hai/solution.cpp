#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    double delta = (double) b * b - 4 * a * c;
    if (delta < 0)
        cout << -1;
    else if (delta == 0)
        cout << 0;
    else
        cout << 1;

    return 0;
}