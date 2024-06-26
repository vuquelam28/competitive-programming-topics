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

int main()
{
    // nhap vao mot so nguyen duong duy nhat la so thu tu cua test case, bat dau tu 1
    int test_number;
    cin >> test_number;
    int nmax, mmax, vmax, xmax;

    if (test_number <= 3) {
        // test case ngau nhien cho sub 1
        nmax = mmax = 10;
        vmax = 100;
        xmax = 100;
    } else if (test_number <= 6) {
        // test case ngau nhien cho sub 2
        nmax = mmax = 100;
        vmax = 1000;
        xmax = 1000;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 3
        nmax = mmax = 1000;
        vmax = 1e9;
        xmax = 1000;
    }

    int n = rand_int(1, nmax), m = rand_int(1, mmax);
    cout << m << ' ' << n << endl;

    for (int i = 1; i <= m; ++i)
        cout << rand_int(1, vmax) << endl;

    for (int i = 1; i <= n; ++i)
    {
        int l = rand_int(1, vmax), r = rand_int(l, vmax), x = rand_int(1, xmax);
        cout << l << ' ' << r << ' ' << x << endl;
    }
}