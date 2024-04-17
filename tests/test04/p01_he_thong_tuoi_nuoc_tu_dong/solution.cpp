#include <bits/stdc++.h>

using namespace std;

priority_queue < int > q;

int main()
{
    int n, water, flow;
    cin >> n >> water >> flow;

    int x;
    cin >> x;

    int ans = 0;
    int sum = x, first = x;
    for (int i = 2; i <= n; ++i)
    {
        cin >> x;
        sum += x;
        q.push(x);
    }

    while (true)
    {
        if (1.0 * water * first / sum >= flow)
        {
            cout << ans;
            return 0;
        }

        sum -= q.top();
        q.pop();
        ++ans;

        if (ans == n - 1)
        {
            cout << ans;
            return 0;
        }
    }

    return 0;
}