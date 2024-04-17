#include <bits/stdc++.h>

using namespace std;
     
const double pi = 3.14;

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

struct Circle
{
    Point o;
    int r;
    
    Circle() {}
    
    Circle(Point _o, int _r)
    {
        o = _o;
        r = _r;
    }
    
    double perimeter()
    {
        return 2 * r * pi;
    }
    
    double area()
    {
        return r * r * pi;
    }
    
    bool check_in(Point p)
    {
        return (o.x - p.x) * (o.x - p.x) + (o.y - p.y) * (o.y - p.y) <= r * r;     
    }
};
            
int main()
{
    int x, y, r;
    cin >> x >> y >> r;
    Circle c({x, y}, r);
    
    int q;
    cin >> q;
    
    while (q--)
    {
        int t;
        cin >> t;
        
        if (t == 1)
        {
            int x, y, r;
            cin >> x >> y >> r;
            
            c = Circle({x, y}, r);
        }
        else if (t == 2)
            cout << fixed << setprecision(2) << c.perimeter() << endl;
        else if (t == 3)
            cout << fixed << setprecision(2) << c.area() << endl;
        else if (t == 4)
        {
            int x, y;
            cin >> x >> y;
            
            if (c.check_in({x, y}))
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }
    
    return 0;
}