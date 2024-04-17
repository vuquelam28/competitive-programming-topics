#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int chickens = 0, dogs = 0;
    for (int i = 1; i <= N; ++i)
        if (2 * i + 4 * (N - i) == M)
        {
            chickens = i;
            dogs = N - i;

            break;
        }

    if (chickens == 0 && dogs == 0)
        cout << -1;
    else
        cout << chickens << ' ' << dogs;

    return 0;
}