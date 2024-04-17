#include <iostream>

using namespace std;

main()
{
    int m;
    cin >> m;

    if (1 <= m && m <= 3)
        cout << 1;
    else if (m <= 6)
        cout << 2;
    else if (m <= 9)
        cout << 3;
    else 
        cout << 4;

    return 0;
}