#include <iostream>

using namespace std;

int a[1001];

main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int res = 0;
    for (int i = 2; i <= n; ++i)
        if (a[i] * a[i - 1] < 0)
            ++res;

    cout << res;
}
