#include <iostream>

using namespace std;

int a[101][101];

main()
{
    int m, n;
    cin >> m >> n;

    // Duyệt toàn bộ phần tử.
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            if (a[i][j] <= 0) // Tồn tại 1 a[i][j] không dương.
            {
                cout << "NO";
                return 0;
            }

    cout << "YES";

    return 0;
}