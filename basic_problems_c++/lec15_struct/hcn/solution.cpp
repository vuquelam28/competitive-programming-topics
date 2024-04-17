#include <bits/stdc++.h>
#define int long long

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

struct Rectangle
{
    Point a, b;    
    
    Rectangle() {}
    
    Rectangle(Point _a, Point _b)
    {
        a = _a;
        b = _b;
    }
    
    int perimeter()
    {
        return ((b.x - a.x) + (b.y - a.y)) * 2;
    }
    
    int area()
    {
        return (b.x - a.x) * (b.y - a.y);    
    }
    
    bool check_in(Point c)
    {
        return (a.x <= c.x && c.x <= b.x && a.y <= c.y && c.y <= b.y);
    }
};

main()
{
    int x, y, u, v;
    cin >> x >> y >> u >> v;
    Rectangle r({x, y}, {u, v});
    
    int q;
    cin >> q;
    
    while (q--)
    {
        int t;
        cin >> t;
        
        if (t == 1)
        {
            cin >> x >> y >> u >> v;
            r = Rectangle({x, y}, {u, v});
        }
        else if (t == 2)
            cout << r.perimeter() << endl;
        else if (t == 3)
            cout << r.area() << endl;
        else 
        {
            int x, y;
            cin >> x >> y;
            Point p(x, y);
            
            if (r.check_in(p))
                cout << "YES\n";
            else 
                cout << "NO\n";
        }
    }
    
    return 0;
}