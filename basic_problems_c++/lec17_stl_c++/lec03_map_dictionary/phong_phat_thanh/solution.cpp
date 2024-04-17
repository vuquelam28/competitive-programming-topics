#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    map < string, string > mark;
    for (int i = 1; i <= n; ++i)
    {
        string name, ip;
        cin >> name >> ip;
        
        mark[ip] = name;
    }
    
    for (int i = 1; i <= m; ++i)
    {
        string command, ip;
        cin >> command >> ip;
        
        ip.pop_back();
        
        string new_command = command + ' ' + ip + "; #" + mark[ip];
        cout << new_command << endl;
    }

    return 0;
}