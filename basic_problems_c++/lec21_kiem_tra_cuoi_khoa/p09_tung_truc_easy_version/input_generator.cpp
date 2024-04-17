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

    if (test_number <= 3) {
        // test case ngau nhien cho sub 1
        nmax = 10;
        vmax = 10;
    } else if (test_number <= 6) {
        // test case ngau nhien cho sub 2
        nmax = 100;
        vmax = 100000;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 3
        nmax = 1000;
        vmax = 1000000000;
    }

    int n = rand_int(1, nmax);
    int a = rand_int(1, n - 1), b = rand_int(1, n - a);
    int r = rand_int(1, 2);
    if (r == 2)
        a = rand_int(1, min(10, n - 1)), b = rand_int(1, n - a);
        
    cout << n << ' ' << a << ' ' << b << endl;

    vector < pair < int, int > > road;
    for (int i = 1; i <= n; ++i)
    {
        int d = rand_int(1, vmax), k = rand_int(1, 2);
        road.push_back({d, k});
    }

    for (auto e: road)
        cout << e.first << ' ' << e.second << endl;
}