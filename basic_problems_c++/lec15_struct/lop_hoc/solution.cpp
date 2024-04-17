#include <bits/stdc++.h>
    
using namespace std;

struct Student
{
    string s;
    int a, b, c;
    double p;
    Student() {}

    Student(string _s, int _a, int _b, int _c, double _p)
    {
        s = _s;
        a = _a;
        b = _b;
        c = _c;
        p = _p;
    }
};

Student cl[1000];

int main()
{    
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) 
	{
        string s;
        int a, b, c;
        double p;
        cin >> s >> a >> b >> c >> p;
        cl[i] = Student(s, a, b, c, p);
    }

    int q;
    cin >> q;
    
    while (q--)
    {
        int t, id;
        cin >> t >> id;
    
        if (t == 1)
            cin >> cl[id].p;
		else if (t == 2) 
		{
            string a = to_string(cl[id].a);
            while (a.size() != 2) 
                a = "0" + a;
            
            string b = to_string(cl[id].b);
            while (b.size() != 2)
                b = "0" + b;
            
            string c = to_string(cl[id].c);
            while (c.size() != 4)
                c = "0" + c;
            
            cout << a << "/" << b << "/" << c << endl;
        } 
		else if (t == 3) 
		{
            cout << cl[id].s << " ";
            cout << fixed << setprecision(1) << cl[id].p << endl;
        }
    }

    return 0;
}