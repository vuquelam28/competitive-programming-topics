#include <bits/stdc++.h>

using namespace std;

int a[101];

void delete_element(int y, int &n)
{
    for (int i = y; i < n; ++i)
        a[i] = a[i + 1];

    --n;
}

int find_max_value(int n)
{
    int maxv = a[1];
    for (int i = 2; i <= n; ++i)
        if (maxv < a[i])
            maxv = a[i];

    return maxv;
}

void solution(int n)
{
    int maxv = find_max_value(n);

    for (int i = n; i >= 1; --i)
        if (a[i] == maxv)
            delete_element(i, n);

    cout << n << endl;
    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    solution(n);

    return 0;
}