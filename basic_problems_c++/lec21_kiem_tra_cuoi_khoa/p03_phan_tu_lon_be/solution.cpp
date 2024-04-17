#include <bits/stdc++.h>

using namespace std;

int n;
int a[105];

int find_min(int i)
{
    if (i == n) 
        return a[i];

    return min(a[i], find_min(i + 1));
}

int find_max(int i)
{
    if (i == n) 
        return a[i];
        
    return max(a[i], find_max(i + 1));
}

int main()
{
    cin >> n;

    for (int i = 1; i <= n; ++i) 
        cin >> a[i];

    cout << find_min(1) << '\n';
    cout << find_max(1);

    return 0;
}