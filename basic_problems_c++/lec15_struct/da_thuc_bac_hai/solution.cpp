#include <bits/stdc++.h>
#define int long long

using namespace std;

struct DaThuc
{
    int a, b, c;
    
    DaThuc(int _a, int _b, int _c)
    {
        a = _a;
        b = _b;
        c = _c;
    }
    
    int get_delta()
    {
        return b * b + 4 * a * c;    
    }
    
    int calc(int v)
    {
        return a * v * v + b * v + c;    
    }
};

main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    DaThuc dt(a, b, c);
    
    int q;
    cin >> q;
    
    while (q--)
    {
        int t;
        cin >> t;
        
        if (t == 1)
        {
            int a, b, c;
            cin >> a >> b >> c;
            dt = DaThuc(a, b, c);
        }
        else if (t == 2)
            cout << dt.get_delta() << endl;
        else if (t == 3)
        {
            int v;
            cin >> v;
            
            cout << dt.calc(v) << endl;
        }
    }
    
    return 0;
}