#include <bits/stdc++.h>
#define F first
#define S second
#define rep(i, l, r) for (int i = (l); i <= (r); ++i)
#define Rep(i, r, l) for (int i = (r); i >= (l); --i)

using namespace std;
typedef pair<int, int> ii;

const int N = 1e4 + 2;
int n;
ii cow[N];
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    cin >> n;
    rep(i, 1, n) 
        cin >> cow[i].S >> cow[i].F;

    sort(cow + 1, cow + 1 + n);
    multiset<int> s;
    int cur = 0, ans = 0;
    rep(i, 1, n)
    {
        s.insert(cow[i].S);
        ans += cow[i].S;
        cur++;
        if (cur > cow[i].F)
        {
            ans -= *s.begin();
            s.erase(s.begin());
            cur--;
        }
    }
    cout << ans;
    return 0;
}