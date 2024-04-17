#include <bits/stdc++.h>
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
    int nmin, nmax;
    double wmax, vmin, vmax;

    if (test_number <= 5) {
        // test case ngau nhien cho sub 1
        nmin = 1;
        nmax = 10;
        wmax = 50;
        vmin = 1;
        vmax = 10;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 2
        nmin = 15;
        nmax = 20;
        wmax = 1000;
        vmin = 1;
        vmax = 1000;
    }

    int n = rand_int(nmin, nmax);
    double W = rand_double(1.0, wmax);
    cout << n << ' ';
    cout << fixed << setprecision(rand_int(1, 4)) << W << endl;

    for (int i = 1; i <= n; ++i)
    {
        double w = rand_double(vmin, vmax);
        double v = rand_double(vmin, vmax);

        cout << fixed << setprecision(rand_int(1, 4)) << w << ' ';
        cout << fixed << setprecision(rand_int(1, 4)) << v << endl;
    }
}