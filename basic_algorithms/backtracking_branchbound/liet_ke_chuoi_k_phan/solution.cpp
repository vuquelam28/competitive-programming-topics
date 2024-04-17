#include <bits/stdc++.h>

using namespace std;

int n, k;
int s[11];

void back_tracking(int x)
{
    if(x > n)
    {
        for(int i = 1; i <= n; ++i) 
            cout << s[i];

        cout << '\n';

        return;
    }

    for (int i = 0; i < k; ++i)
    {
        s[x] = i;
        back_tracking(x + 1);
    }
}

int main()
{
    cin >> n >> k;
    back_tracking(1);
    return 0;
}