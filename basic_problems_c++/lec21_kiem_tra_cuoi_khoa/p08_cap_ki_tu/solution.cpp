#include <bits/stdc++.h>

using namespace std;

const int maxn = 5000 + 10;
int n, a[maxn];

void enter()
{
    cin >> n;

    for (int i = 1; i <= n; ++i) 
        cin >> a[i];
}

void solution()
{
    string s;

    for (int i = n; i >= 1; --i)
    {
        if (!a[i]) 
            s = "AB" + s;
        else 
            s.insert(s.begin() + a[i] - 1, 'B'), s = 'A' + s;
    }

    cout << s;
}

int main()
{
    enter();
    solution();
    
    return 0;
}