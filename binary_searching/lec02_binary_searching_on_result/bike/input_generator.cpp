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
    int nmax, mmax, cmax, amax, bmax;

    if (test_number <= 3) {
        nmax = 10;
        mmax = 10;
        cmax = 10;
        amax = 10;
        bmax = 10;
    } else if (test_number <= 6) {
        nmax = 100;
        mmax = 100;
        cmax = 1000;
        amax = 1000;
        bmax = 100000;
    } else if (test_number <= 20) {
        nmax = 100000;
        mmax = 100000;
        cmax = 1000000000;
        amax = 10000;
        bmax = 1000000000;
    }

    int n = rand_int(1, nmax), m = rand_int(1, mmax), c = rand_int(0, cmax);
    cout << n << ' ' << m << ' ' << c << endl;

    for (int i = 1; i <= n; ++i)
        cout << rand_int(1, amax) << ' ';
    cout << endl;

    for (int i = 1; i <= m; ++i)
        cout << rand_int(1, bmax) << ' ';
}