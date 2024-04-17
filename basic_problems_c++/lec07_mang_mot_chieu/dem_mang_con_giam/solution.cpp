#include <bits/stdc++.h>

using namespace std;

int a[101];

bool check_sub_array(int l, int r)
{
    if (r - l + 1 == 1)
        return true;

    for (int i = l + 1; i <= r; ++i)
        if (a[i] >= a[i - 1])
            return false;

    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int res = 0;
    for (int sz = 1; sz <= n; ++sz)
        for (int l = 1; l <= n - sz + 1; ++l)
        {
            int r = l + sz - 1;

            if (check_sub_array(l, r))
                ++res;
        }

    cout << res;

    return 0;
}