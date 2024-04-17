#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

vector <pair<int, int> > a;
vector <pair<int, int> > path;
vector <int> val;
int n, m, ans = 0;
int s[30];

void back_track(int x, int sum)
{
    //cout << sum << '\n';
    if(x == a.size())
    {
        ans = max(ans, sum);
        return;
    }
    if(a[x].X >= path.back().X && a[x].Y >= path.back().Y) //kiểm tra ô trước đó có thể đi đến ô đang xét hay không
    {
        path.push_back(a[x]);
        back_track(x + 1, sum + val[x]);
        path.pop_back();
    }
    back_track(x + 1, sum);
}

int main() {
    cin >> n >> m;
    path.push_back({0, 0});
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            int x;
            cin >> x;
            if(x > 0)
            {
                a.push_back({i, j});
                val.push_back(x);
            }
        }
    }
    back_track(0, 0);
    cout << ans;
    return 0;
}
