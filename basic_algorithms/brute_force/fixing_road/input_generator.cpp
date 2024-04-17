#include <iostream>
#include <sys/time.h>
#define sqr(x) x * x

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
    int nmin, nmax, qmin, qmax;

    if (test_number <= 5) {
        // test case ngau nhien cho sub 1
        nmin = 1;
        nmax = 10;
        qmin = 1;
        qmax = 10;
    } else if (test_number <= 10) {
        // test case ngau nhien cho sub 2
        nmin = 500;
        nmax = 1000;
        qmin = 25;
        qmax = 50;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 3
        nmin = 50000;
        nmax = 100000;
        qmin = 500;
        qmax = 1000;
    }

    int n = rand_int(nmin, nmax), q = rand_int(qmin, qmax);
    cout << n << endl;
    for (int i = 1; i <= n; ++i)
        cout << rand_int(1, n) << ' ' << rand_int(1, n) << endl;

    cout << q << endl;
    while (q--)
    {
        int u = rand_int(1, n);
        int v = rand_int(1, n);
        cout << u << ' ' << v << endl;
    }
}