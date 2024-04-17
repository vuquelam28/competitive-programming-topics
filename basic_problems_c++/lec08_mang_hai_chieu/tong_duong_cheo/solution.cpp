#include <bits/stdc++.h>

using namespace std;

int a[101][101];

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i)
        for (int j = 1; j <= N; ++j)
            cin >> a[i][j];

    int main_diagonal = 0, secondary_diagonal = 0;
    for (int i = 1; i <= N; ++i)
        for (int j = 1; j <= N; ++j)
        {
            if (i == j)
                main_diagonal += a[i][j];
            if (j == N - i + 1)
                secondary_diagonal += a[i][j];
        }

    cout << main_diagonal << endl << secondary_diagonal;

    return 0;
}