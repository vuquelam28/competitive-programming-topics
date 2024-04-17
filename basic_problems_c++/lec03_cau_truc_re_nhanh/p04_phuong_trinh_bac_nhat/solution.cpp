#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    int a, b;
    cin >> a >> b;
    
    if (a == 0)
    {
        if (b == 0)
            cout << "Vo so nghiem";
        else 
            cout << "Vo nghiem";
    }
    else 
        cout << fixed << setprecision(1) << -b / (double) a;

    return 0;
}