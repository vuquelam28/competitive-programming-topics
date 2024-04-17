#include <iostream>
#include <sys/time.h>
using namespace std;

bool seeded = false;
int a[201][201];

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
    int tmin = 1, tmax, nmin = 1, nmax;

    if (test_number <= 3) {
        // test case ngau nhien cho sub 1
        tmax = 1;
        nmax = 10;
    } else if (test_number <= 6) {
        // test case ngau nhien cho sub 2
        tmax = 10;
        nmax = 50;
    } else if (test_number <= 15) {
        // test case ngau nhien cho sub 3
        tmin = 50;
        tmax = 100;
        nmin = 50;
        nmax = 100;
    } else {
        // test case ngau nhien cho sub 4
        tmin = tmax = 50;
        nmin = nmax = 200;
    }

    int t = rand_int(tmin, tmax);
    cout << t << endl;

    while (t--)
    {
        int m = rand_int(nmin, nmax), n = rand_int(nmin, nmax);
        cout << m << ' ' << n << endl;

        int ones = rand_int(1, min(10, min(m, n)));

        for (int i = 1; i <= m; ++i)
            for (int j = 1; j <= n; ++j)
                a[i][j] = 0;
                
        while (ones--)
        {
            int u = rand_int(1, m), v = rand_int(1, n);
            a[u][v] = 1;
        }

        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j)
                cout << a[i][j] << ' ';

            cout << endl;
        }
    }
}