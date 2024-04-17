#include <bits/stdc++.h>

using namespace std;

bool is_leap_year(int y)
{
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int days_of_month(int m, int y)
{
    if (m == 2)
        return 28 + is_leap_year(y);
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;

    return 31;
}

void find_prev_day(int d, int m, int y)
{
    if (d == 1) // Nếu ngày nhập vào là 1.
    {
        if (m == 1) // Nếu tháng nhập vào là 1.
        {
            m = 12;
            y = y - 1;
        }
        else
            m = m - 1;

        d = days_of_month(m, y); // Ngày chính bằng số ngày của tháng trước đó.
    }
    else
        d = d - 1; // Nếu ngày nhập vào khác 1 thì đơn giản lùi 1 ngày.

    cout << d << ' ' << m << ' ' << y << endl;
}

int main()
{
    int d, m, y;
    while (cin >> d >> m >> y)
        find_prev_day(d, m, y);

    return 0;
}
