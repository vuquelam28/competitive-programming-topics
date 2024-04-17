#include <bits/stdc++.h>

using namespace std;

bool check(int x)
    {
        int sum_divisors = 0;
        for (int i = 1; i < x; ++i)
            if (x % i == 0)
                sum_divisors += i;

        return (sum_divisors == x);
    }

int main()
{
    int n;
    cin >> n;

    bool found = false;
    for (int i = 1; i <= n; ++i)
        if (check(i))
        {
            found = true;
            cout << i << endl;
        }

    if (!found)
        cout << -1;

    return 0;
}