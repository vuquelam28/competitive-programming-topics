#include <bits/stdc++.h>

using namespace std;

void check(int a, int b, int c)
{
    if (a >= b + c || b >= a + c || c >= a + b)
        cout << "Invalid" << endl;
    else
    {
        if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
            cout << "Vuong" << endl;
        else if (a == b && b == c)
            cout << "Deu" << endl;
        else if (a == b || b == c || a == c)
            cout << "Can" << endl;
        else
            cout << "Thuong" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;

        check(a, b, c);
    }

    return 0;
}