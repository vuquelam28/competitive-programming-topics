#include <iostream>
#include <vector>
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
    int nmax, kmax, vmax;

    if (test_number <= 3) {
        // test case ngau nhien cho sub 1
        nmax = 10;
        kmax = 1;
        vmax = 100;
    } else if (test_number <= 6) {
        // test case ngau nhien cho sub 2
        nmax = 300;
        kmax = 1;
        vmax = 100000;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 3
        nmax = 100000;
        kmax = 100000;
        vmax = 1000000000;
    }

    int n = rand_int(2, nmax);
    int k = rand_int(1, kmax);

    cout << n << ' ' << k << endl;
    vector < int > a(n + 1);
    a[1] = rand_int(1, vmax / n);
    for (int i = 2; i <= n; ++i)
        a[i] = rand_int(a[i - 1] + 1, i * (vmax / n));

    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
}