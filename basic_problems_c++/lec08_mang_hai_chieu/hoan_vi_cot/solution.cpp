#include <iostream>

using namespace std;

int a[101][101];

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

main()
{
    int m, n, x, y;
    cin >> m >> n >> x >> y;

    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];

    for (int i = 1; i <= m; ++i)
        swap(a[i][x], a[i][y]);
    
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << ' ';

        cout << endl;
    }

    return 0;
}