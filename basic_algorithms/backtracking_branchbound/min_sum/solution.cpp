#include <bits/stdc++.h>
#define int long long

using namespace std;

int n, a[11];
int sum = 0;
map < long long, int > mark;
    
void backtrack(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        sum += j * a[i];
        
        if (i == n)
            mark[sum] = 1;
        else 
            backtrack(i + 1);
        
        sum -= j * a[i];
    }
}

main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i) 
        cin >> a[i];

    backtrack(1);

    for (int i = 1; i <= mark.size() + 1; ++i)
        if (!mark[i])
        {
            cout << i;
            return 0;
        }
}