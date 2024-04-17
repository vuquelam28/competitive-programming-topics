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
    int nmax, kmax, smax, tmax, vmax;

    if (test_number <= 3) {
        // test case ngau nhien cho sub 1
        nmax = 10;
        kmax = 10;
        smax = 50;
        tmax = 50;
        vmax = 10;
    } else if (test_number <= 6) {
        // test case ngau nhien cho sub 2
        nmax = kmax = 100;
        smax = 1000;
        tmax = 500;
        vmax = 100;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 3
        nmax = kmax = 2e5;
        smax = 1e9;
        tmax = 2e9;
        vmax = 1e9;
    }

    int n = rand_int(1, nmax), k = rand_int(1, kmax), s = rand_int(k + 100, smax), t = rand_int(1, tmax);
    cout << n << ' ' << k << ' ' << s << ' ' << t << endl;

    for (int i = 1; i <= n; ++i)
        cout << rand_int(1, vmax) << ' ' << rand_int(1, vmax) << endl;

    map < int, int > mark;
    for (int i = 1; i <= k; ++i)
    {
        int x = rand_int(1, s - 1);
        while (mark.find(x) != mark.end())
            x = rand_int(1, s - 1);
        
        mark[x] = 1;

        cout << x << ' ';
    }
}