#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x, y;
    
    Point() {}
    
    Point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};

struct Line
{
    int a, b, c;
    
    Line() {}
    
    Line(int _a, int _b, int _c)
    {
        a = _a;
        b = _b;
        c = _c;
    }
    
    bool check_on_line(Point p)
    {
        return a * p.x + b * p.y == c;    
    }
    
    // a1 * x + b1 * y + c1 song song a2 * x + b2 * y + c2
    // khi: a1 * b2 = a2 * b1 và a1 * c2 != a2 * c1.
    bool check_parallel(Line d)
    {
        return (a * d.b == b * d.a && a * d.c != c * d.a);
    }
};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    Line d(a, b, c);
    
    int q;
    cin >> q;
    
    while (q--)
    {
        int t;
        cin >> t;
        
        if (t == 1)
        {
            cin >> a >> b >> c;
            d = Line(a, b, c);
        }
        else if (t == 2)
        {
            int u, v;
            cin >> u >> v;
            Point p(u, v);
            
            if (d.check_on_line(p))
                cout << "YES\n";
            else 
                cout << "NO\n";
        }
        else if (t == 3)
        {
            cin >> a >> b >> c;
            Line d1(a, b, c);
            
            if (d.check_parallel(d1))
                cout << "YES\n";
            else 
                cout << "NO\n";
        }
    }
    
    return 0;
}