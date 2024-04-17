#include <iostream>
#include <sys/time.h>
using namespace std;

bool seeded = false;
int mark[1000100];

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
    int nmin, nmax, mmin = 1, mmax, vmin, vmax;

    if (test_number <= 4) {
        // test case ngau nhien cho sub 1
        nmin = 1;
        nmax = 10;
        mmax = 10;
        vmin = 1;
        vmax = 5;
    } else if (test_number <= 8) {
        // test case ngau nhien cho sub 2
        nmin = 50;
        nmax = 100;
        mmax = 100;
        vmin = 1;
        vmax = 100;
    } else if (test_number <= 15) {
        // test case ngau nhien cho sub 3
        nmin = 100000;
        nmax = 1000000;
        mmax = 1000000;
        vmin = 1000;
        vmax = 100000;
    } else if (test_number <= 18) {
        // test case ngau nhien cho sub 4
        nmin = 1000000;
        nmax = 1000000;
        mmax = 1000000;
        vmin = 10000;
        vmax = 100000;
    }
    else {
        nmin = 1000;
        nmax = 1000;
        mmin = 1000000;
        mmax = 1000000;
        vmin = 1;
        vmax = 1000;
    }

    int n = rand_int(nmin, nmax), m = rand_int(1, mmax);
    cout << n << ' ' << m << endl;

    for (int i = 1; i <= n; ++i)
    {
        int v = rand_int(vmin, vmax);
        cout << v << ' ';
    }
}