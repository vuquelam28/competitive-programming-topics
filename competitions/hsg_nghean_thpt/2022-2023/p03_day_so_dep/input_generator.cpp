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
    int nmin, nmax, kmin = 0, kmax, vmax;

    if (test_number <= 4) {
        // test case ngau nhien cho sub 1
        nmin = 1;
        nmax = 10;
        vmax = 10;
        kmax = 50;
    } else if (test_number <= 8) {
        // test case ngau nhien cho sub 2
        nmin = 1;
        nmax = 200;
        kmax = 1000000;
        vmax = 1000000;
    } else if (test_number <= 14) {
        // test case ngau nhien cho sub 3
        nmin = 201;
        nmax = 2000;
        kmax = 1000000;
        vmax = 1000000;
    } else if (test_number <= 18) {
        // test case ngau nhien cho sub 4
        nmin = 1e5;
        nmax = 2e5;
        kmax = 0;
        vmax = 1e6;
    }
    else {
        nmin = 2e5;
        nmax = 2e5;
        kmax = 100;
        vmax = 1e6;
    }   

    int n = rand_int(nmin, nmax), k = rand_int(kmin, kmax);
    cout << n << ' ' << k << endl;
    for (int i = 1; i <= n; ++i)
        cout << rand_int(1, vmax) << ' ';
}