#include <iostream>
#include <sys/time.h>
#include <algorithm>
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
    int nmax, qmax, vmax;

    if (test_number <= 2) {
        // test case ngau nhien cho sub 1
        nmax = 10;
        qmax = 1;
        vmax = 10;
    } else if (test_number <= 4) {
        // test case ngau nhien cho sub 2
        nmax = 1000;
        qmax = 1000;
        vmax = 100000;
    } else if (test_number <= 8) {
        // test case ngau nhien cho sub 3
        nmax = 100000;
        qmax = 100;
        vmax = 1e18;
    } else {
        // test case ngau nhien cho sub 4
        nmax = 100;
        qmax = 1e5;
        vmax = 1e18;
    }

    int n = rand_int(1, nmax), q = rand_int(1, qmax);
    cout << n << ' ' << q << endl;

    vector < int > a(n + 1);
    for (int i = 1; i <= n; ++i)
        a[i] = rand_int(1, vmax);
    sort(a.begin() + 1, a.end());

    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';

    while (q--)
        cout << rand_int(1, vmax) << endl;
}