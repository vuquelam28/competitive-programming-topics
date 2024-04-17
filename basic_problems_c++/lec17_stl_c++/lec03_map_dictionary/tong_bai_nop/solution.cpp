#include <bits/stdc++.h>

using namespace std;

void solution(map < string, int >& sol_cnt)
{
    vector < int > res;
    for (auto e: sol_cnt)
        res.push_back(e.second);
    sort(res.begin(), res.end());
    
    for (int e: res)
        cout << e << ' ';
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        
        map < string, int > sol_cnt;
        for (int i = 1; i <= 3 * n; ++i)
        {
            string s;
            int c;
            cin >> s >> c;
            
            sol_cnt[s] += c;
        }
        
        solution(sol_cnt);
    }
    
    return 0;
}