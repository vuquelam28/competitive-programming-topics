#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, c;
    cin >> n >> c;

    string a;
    cin >> a;
    
    unordered_set < char > s;
    for (char c: a)
    {
        s.insert(c);
        if (s.size() == 26)
            break;
    }
    
    cout << c - min(c, (int) s.size());
    
    return 0;
}