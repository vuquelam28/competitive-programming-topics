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
        nmax = vmax = 10;
    } else if (test_number <= 6) {
        // test case ngau nhien cho sub 2
        nmax = vmax = 100;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 3
        nmax = vmax = 1e5;
    }

    int n = rand_int(1, nmax);
    cout << n << endl;

    vector < int > a(n + 1);
    int i = 1;
    while (i <= n)
    {
        int c = rand_int(1, 2);
        if (c == 1)
            a[i++] = rand_int(1, vmax);
        else
        {
            int range = rand_int(1, n - i + 1);
            int i0 = i;
            a[i0] = rand_int(1, vmax);

            for (int j = i0 + 1; j <= i0 + range - 1; ++j)
                a[j] = a[j - 1] + 1;

            i = i0 + range;
        }
    }

    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
}