#include <iostream>
using namespace std;

int n, k;
int s[11];

void back_track(int x, int v)
{
    if(x > k)
    {
        for(int i = 1; i <= k; ++i) cout << s[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = v; i <= n; ++i)
    {
        s[x] = i;
        back_track(x + 1, i + 1);
    }
}

int main() 
{
    cin >> n >> k;
    back_track(1, 1);
    return 0;
}