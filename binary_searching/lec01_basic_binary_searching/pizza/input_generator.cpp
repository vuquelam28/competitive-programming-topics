#include <iostream>
#include <sys/time.h>
#define int long long
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

main()
{
    // nhap vao mot so nguyen duong duy nhat la so thu tu cua test case, bat dau tu 1
    int test_number;
    cin >> test_number;
    int tmax, nmax, mmax, vmax;

    if (test_number <= 2) {
        // test case ngau nhien cho sub 1
        tmax = 1;
        nmax = 10;
        vmax = 100;
        mmax = 100;
    } else if (test_number <= 5) {
        // test case ngau nhien cho sub 2
        tmax = 1;
        nmax = 1000;
        mmax = 1000;
        vmax = 1000;
    } else if (test_number <= 10) {
        // test case ngau nhien cho sub 3
        tmax = 10;
        nmax = 100000;
        mmax = 2e9;
        vmax = 2e9;
    }
    else 
    {
        tmax = 100;
        nmax = 100;
        mmax = 2e9;
        vmax = 2e9;
    }

    int t = rand_int(1, tmax);
    cout << t << endl;

    while (t--)
    {
        int n = rand_int(1, nmax), m = rand_int(-mmax, mmax);
        cout << n << ' ' << m << endl;

        for (int i = 1; i <= n; ++i)
            cout << rand_int(-vmax, vmax) << ' ';
    }
}