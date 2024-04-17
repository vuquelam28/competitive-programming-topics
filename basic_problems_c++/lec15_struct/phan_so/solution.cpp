#include <bits/stdc++.h>

using namespace std;

struct Frac
{
    int x, y;
    
    void input()
    {
        cin >> x >> y;    
    }
    
    void output()
    {
        cout << x << ' ' << y << endl;
    }
    
    string comp(Frac f)
    {
        if (x * f.y < y * f.x)
            return "YES";
        else 
            return "NO";
    }
    
    Frac add(Frac f)
    {
        Frac sum;
        sum.x = x * f.y + y * f.x;
        sum.y = y * f.y;
        
        int g = __gcd(sum.x, sum.y);
        sum.x /= g;
        sum.y /= g;
        
        return sum;
    }
};

int main()
{
    Frac f;
    f.input();
    
    int q;
    cin >> q;
    
    while (q--)
    {
        int t;
        cin >> t;
        Frac f1;
        f1.input();
        
        if (t == 1)
            cout << f.comp(f1) << endl;
        else
        {
            Frac sum = f.add(f1);
            sum.output();
        }
    }
    
    return 0;
}