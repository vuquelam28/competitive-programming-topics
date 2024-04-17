#include <iostream>
#include <sys/time.h>
using namespace std;

bool seeded = false;
int mark[1000000];

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
    int nmin, nmax, vmax;

    if (test_number <= 3) {
        // test case ngau nhien cho sub 1
        nmin = 2;
        nmax = 10;
    } else if (test_number <= 6) {
        // test case ngau nhien cho sub 2
        nmin = 50;
        nmax = 100;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 3
        nmin = 50000;
        nmax = 100000;
    }

    int n = rand_int(nmin, nmax), k = rand_int(1, n - 1);
    cout << n << endl << k << endl;

    for (int i = 1; i <= n; ++i)
    {
        int a = rand_int(1, n);

        while (mark[a])
            a = rand_int(1, n);

        mark[a] = 1;
        cout << a << ' ';
    }
}