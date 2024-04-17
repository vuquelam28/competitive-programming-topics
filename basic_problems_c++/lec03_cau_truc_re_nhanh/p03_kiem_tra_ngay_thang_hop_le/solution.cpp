#include <bits/stdc++.h>

using namespace std;

bool is_leap_year(int year)
{
    return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > 31 || b > 12 || c > 3000)
    {
        cout << "No";
        return 0;
    }

    if (b == 2)
    {
        if (is_leap_year(c))
        {
            if (a > 29)
                cout << "No";
            else
                cout << "Yes";
        }
        else
        {
            if (a > 28)
                cout << "No";
            else
                cout << "Yes";
        }
    }
    else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
    {
        if (a > 31)
            cout << "No";
        else
            cout << "Yes";
    }
    else
    {
        if (a > 30)
            cout << "No";
        else
            cout << "Yes";
    }

    return 0;
}


