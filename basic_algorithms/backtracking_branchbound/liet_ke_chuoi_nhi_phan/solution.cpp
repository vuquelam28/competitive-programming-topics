#include <bits/stdc++.h>

using namespace std;

int x[21];

using namespace std;

void out(int n)
{
    for (int i = 1; i <= n; ++i)
        cout << x[i] << ' ';
    cout << '\n';
}

void backtrack(int i, int n)
{
    for (int j = 0; j <= 1; ++j)
    {
        x[i] = j;

        if (i == n) 
            out(n);
        else 
            backtrack(i + 1, n);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    backtrack(1, n);

    return 0;
}