#include <iostream>
#include <iomanip>

using namespace std;

int a[1001];

main()
{
    int n, x;
    cin >> n >> x;

    int cnt = 0, sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];

        if (a[i] > x)
        {
            ++cnt;
            sum += a[i];
        }
    }

    cout << fixed << setprecision(2) << (double) sum / cnt;
}