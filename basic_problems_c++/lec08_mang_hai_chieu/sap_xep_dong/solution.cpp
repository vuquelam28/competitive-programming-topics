#include <iostream>

using namespace std;

int a[101][101];

void hoan_vi_ptu(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void hoan_vi_dong(int n, int x, int y)
{
    for (int j = 1; j <= n; ++j)
        hoan_vi_ptu(a[x][j], a[y][j]);
}

int tong_hang(int n, int x)
{
    int sum = 0;
    for (int j = 1; j <= n; ++j)
        sum += a[x][j];

    return sum;
}

main()
{
    int m, n;
    cin >> m >> n;

    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];

    for (int x = 1; x < m; ++x)
        for (int y = x + 1; y <= m; ++y)
            if (tong_hang(n, x) > tong_hang(n, y))
                hoan_vi_dong(n, x, y);

    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << ' ';

        cout << endl;
    }

    return 0;
}