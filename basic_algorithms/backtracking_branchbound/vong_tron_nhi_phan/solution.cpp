#include <bits/stdc++.h>
using namespace std;

int n;
int s[(1 << 16) + 5];
bool used[(1 << 16) + 5];

void back_track(int x)
{
    if(x > (1 << n))
    {
        for(int i = 1; i <= (1 << n); ++i) cout << s[i] << ' ';
            exit(0);
    }

    for(int i = 0; i < n; ++i)
    {
        int nxt = ((1 << i) ^ s[x - 1]); //đảo bit thứ i của phần tử trước đó.
        if(x == (1 << n) && __builtin_popcount(nxt ^ s[1]) != 1) continue;
        if(!used[nxt])
        {
            used[nxt] = true;
            s[x] = nxt;
            back_track(x + 1);
            used[nxt] = false;
        }
    }
}

int main() {
    cin >> n;
    for(int start = 0; start < (1 << n); ++start)
    {
        used[start] = true;
        s[1] = start;
        back_track(2);
        used[start] = false;
    }
    return 0;
}
