#include <iostream>
#include <sys/time.h>
using namespace std;

bool seeded = false;

void seeding() {
    struct timeval time;
    gettimeofday(&time,NULL);
    srand((time.tv_sec * 1000) + (time.tv_usec / 1000));
    seeded = true;
}

long long rand_int(long long l, long long h)
{
    if (!seeded) seeding();

    return l + ((long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) +
                rand()) % (h - l + 1);
}

double rand_double(double l, double h)
{
    if (!seeded) seeding();

    double f = (double)rand() / RAND_MAX;

    return l + f * (h - l);
}

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

int main()
{
    // nhap vao mot so nguyen duong duy nhat la so thu tu cua test case, bat dau tu 1
    int test_number;
    cin >> test_number;

    int tmax;
    if (test_number <= 5)
    {
        tmax = 10;
    }
    else 
    {
        tmax = 1000;
    }

    int t = rand_int(1, tmax);
    while (t--)
    {
        int y = rand_int(2, 3000);
        int m = rand_int(1, 12);
        int d = rand_int(1, days_of_month(m, y));

        cout << d << ' ' << m << ' ' << y << endl;
    }
}