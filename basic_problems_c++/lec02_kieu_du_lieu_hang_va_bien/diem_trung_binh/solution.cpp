#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(1) << (double) (a * 10 + b * 9 + c * 8) / (a + b + c);

    return 0;
}