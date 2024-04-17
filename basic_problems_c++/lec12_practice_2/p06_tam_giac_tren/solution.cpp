#include <iostream>
using namespace std;

int n,a[101][101];
int main()
{
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for(int j = 1;j <= n; ++j)
        {
            cin >> a[i][j];
        }
    }

    int res = a[1][2];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if(a[i][j] > res)
                res = a[i][j];
        }
    }

    cout << res;

    return 0;
}