#include <bits/stdc++.h>

using namespace std;

int a[101];

int get_product(int n, int a[])
{
    if (n == 1)
        return 1;

    if (a[n] > a[n - 1])
        return get_product(n - 1, a) * a[n];
    else
        return get_product(n - 1, a);
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int product = get_product(n, a);
    cout << product;

    return 0;
}