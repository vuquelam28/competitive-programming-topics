#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map < string, bool > mark;
    for (int i = 1; i <= n; ++i)
    {
        string s;
        cin.ignore();
        cin >> s;
       
        if (mark.find(s) != mark.end())
            cout << "YES" << endl;
        else 
        {
           cout << "NO" << endl;
           mark[s] = true;
        }
    }
    
    return 0;
}