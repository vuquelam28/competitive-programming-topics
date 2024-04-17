#include <iostream>
#include <iomanip>

using namespace std;

const double pi = 3.14;

main()
{
    double r;
    cin >> r;

    double* ptr_r = &r;
    cout << fixed << setprecision(2) << (*ptr_r) * (*ptr_r) * pi;

    return 0;
}