#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e5 + 10;
int n, k, res, a[maxn];

void enter()
{
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

void solution()
{
    sort(a + 1, a + 1 + n);

    for (int i = 2; i <= n; ++i)
    {
        int l = 1, r = i - 1;
        int left = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[i] - a[mid] <= k)
            	left = mid, r = mid - 1;
            else 
                l = mid + 1;
        }
	
	if (left != 0)
           res += (i - left); // ket qua bang i - left;
    }
    cout << res;
}

main()
{
    enter();
    solution();

    return 0;
}