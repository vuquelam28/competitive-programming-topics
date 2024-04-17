#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "MANY SOLUTIONS";
            else
                cout << "NO SOLUTION";
        }
        else
            cout << fixed << setprecision(2) << -c / b;
    }
    else
    {
        double delta = (double) b * b - 4.0 * a * c;
        if (delta < 0)
            cout << "NO SOLUTION";
        else if (delta == 0)
            cout << fixed << setprecision(2) << -b / (2.0 * a);
        else
        {
            double x1 = (-b + sqrt(delta)) / (2.0 * a);
            double x2 = (-b - sqrt(delta)) / (2.0 * a);

            cout << fixed << setprecision(2) << x1 << endl << x2;
        }
    }

    return 0;
}