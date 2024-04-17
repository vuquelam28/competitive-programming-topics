#include <bits/stdc++.h>

using namespace std;

int a[102];

int find_pos(int x, int n)
{
    for (int i = 1; i <= n; ++i)
        if (a[i] >= x)
            return i;
    
    return n + 1;
}

void add_element(int x, int p, int &n)
{
    for (int i = n + 1; i > p; --i)
        a[i] = a[i - 1];
    
    a[p] = x;
    ++n;
}

int main()
{
    int n, x;
    cin >> n >> x;
    
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    
    int p = find_pos(x, n);
    add_element(x, p, n);
    
    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
    
    return 0;
}