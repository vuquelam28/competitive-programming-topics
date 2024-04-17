#include <bits/stdc++.h>

using namespace std;

void female(int h)
{
    cout << fixed << setprecision(2) << h / 100.0 << endl;
}

void male(int h)
{
    cout << fixed << setprecision(2) << h / 10.0 << endl;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        int t, h;
        cin >> t >> h;

        if (t == 1)
            male(h);
        else
            female(h);
    }

    return 0;
}