#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;
int n;
int a[maxn], b[maxn];

int main() 
{
    int n;
	cin >> n;

	for (int i=1; i<=n; i++) 
        cin >> a[i];

    fill(b + 1, b + n + 1, 1e9);

    int ans = 0;
    for (int i = 1; i <= n; i++) 
    {
        int pos = upper_bound(b + 1, b + n + 1, a[i]) - b;
        b[pos] = a[i];
        ans = max(ans, pos);
    }

    cout << n - ans;
}