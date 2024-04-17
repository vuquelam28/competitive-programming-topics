#include <iostream>

using namespace std;

main()
{
    int h;
    cin >> h;

    for (int i = 1; i <= h; ++i)
    {
        for (int j = 1; j <= h - i; ++j)
            cout << ' ';
        for (int j = 1; j <= i * 2 - 1; ++j)
            cout << '*';
        cout << endl;
    }

    return 0;
}
