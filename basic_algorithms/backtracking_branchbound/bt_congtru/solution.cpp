#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>

using namespace std;

void print_result(vector < int > &x, vector < int > &a)
{
    for (int i = 0; i < a.size(); ++i)
        if (x[i] == 0)
            cout << '-' << a[i];
        else 
            cout << '+' << a[i];
}
    
void backtrack(int i, vector < int > &a, int &sum, vector < int > &x, int m)
{
    for (int j = 0; j <= 1; ++j)
    {
        if (j == 0)
            sum -= a[i];
        else 
            sum += a[i];
        
        x[i] = j;
        
        if (i == a.size() - 1)
        {
            if (sum == m)
            {
                print_result(x, a);
                exit(0);
            }
        }
        else 
            backtrack(i + 1, a, sum, x, m);
        
        if (j == 0)
            sum += a[i];
        else 
            sum -= a[i];
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m;
    cin >> m;
    
    string s;
    cin >> s;
    
    vector < int > a(s.size());
    for (int i = 0; i < s.size(); ++i)
        a[i] = s[i] - '0';
    
    int sum = 0;
    vector < int > x(s.size());
    backtrack(0, a, sum, x, m);
    
    cout << -1;
    
    return 0;
}