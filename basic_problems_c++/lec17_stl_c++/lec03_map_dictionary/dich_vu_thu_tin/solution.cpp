#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    map < string, int > cnt;
    for (int i = 1; i <= n; ++i)
    {
        string name;
        cin.ignore();
        cin >> name;
        
        if (cnt.find(name) == cnt.end())
            cout << "OK" << endl;
        else 
            cout << name << cnt[name] << endl;
        
        cnt[name]++;
    }
    
    return 0;
}