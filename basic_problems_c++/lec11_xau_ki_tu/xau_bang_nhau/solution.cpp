#include <bits/stdc++.h>

using namespace std;

bool check(string& s, string& t)
{
    for (char c = 'a'; c <= 'z'; ++c)
    {
        int p1 = s.find(c);
        int p2 = t.find(c);

        if (p1 != string::npos && p2 != string::npos)
            return true;
    }
    
    return false;
}

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        
        if (check(s, t))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    
    return 0;
}