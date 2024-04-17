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
    int nmax, vmax;

    if (test_number <= 2) {
        // test case ngau nhien cho sub 1
        nmax = 10;
        vmax = 10;
    } else if (test_number <= 5) {
        // test case ngau nhien cho sub 2
        nmax = 50;
        vmax = 100;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 3
        nmax = 6000;
        vmax = 1e9;
    }

    int n = rand_int(4, nmax);
    cout << n << endl;

    map < pair < int, int >, int > mark;
    for (int i = 1; i <= n; ++i)
    {
        int x = rand_int(-vmax, vmax), y = rand_int(-vmax, vmax);
        while (mark[{x, y}] == 1)
            x = rand_int(-vmax, vmax), y = rand_int(-vmax, vmax);
        mark[{x, y}] = 1;

        cout << x << ' ' << y << endl;
    }
}