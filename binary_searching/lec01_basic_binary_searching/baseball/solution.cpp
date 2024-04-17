#include <bits/stdc++.h>
#define int long long

using namespace std;

void solution(int n, vector < int > &a)
{
    sort(a.begin() + 1, a.end());

    int res = 0;
    for (int i = 1; i <= n - 2; ++i)
        for (int j = i + 1; j <= n - 1; ++j)
        {
            int l = a[j] - a[i], r = 2 * (a[j] - a[i]);
            int p1 = 0, p2 = 0;
            
            int low = j + 1, high = n;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (a[mid] - a[j] >= l)
                {
                    if (a[mid] - a[j] <= r) 
                        p1 = mid;

                    high = mid - 1;
                }
                else 
                    low = mid + 1;
            }

            low = j + 1; high = n;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (a[mid] - a[j] <= r)
                {
                    if (a[mid] - a[j] >= l) 
                        p2 = mid;
                        
                    low = mid + 1;
                }
                else 
                    high = mid - 1;
            }

            if (p1 != 0 && p2 != 0)
                res += (p2 - p1 + 1);
        }
        
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector < int > a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    solution(n, a);

    return 0;
}