#include <bits/stdc++.h>
#define int long long 

using namespace std;

const int maxh = 1e6;

void solution(int n, vector < int > &h)
{   
    vector < int > f(maxh + 1);

    int res = 0;
    for (int i = 1; i <= n; ++i)
        if (f[h[i]] != 0)
        {
            f[h[i]]--;
            f[h[i] - 1]++;
        }
        else
        {
            f[h[i] - 1]++;
            ++res;
        }
    
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector < int > h(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> h[i];

    solution(n, h);

    return 0;
}