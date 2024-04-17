#include <iostream>
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
    int nmax, mmax;

    if (test_number <= 5) {
        // test case ngau nhien cho sub 1
        nmax = mmax = 10;
    } else if (test_number <= 12) {
        // test case ngau nhien cho sub 2
        nmax = mmax = 1000;
    } else if (test_number <= 16) {
        // test case ngau nhien cho sub 3
        nmax = mmax = 1e5;
    } else {
        // test case ngau nhien cho sub 4
        nmax = 1e9;
        mmax = 1e5;
    }

    int n = rand_int(1, nmax);
    int m = rand_int(1, mmax);
    cout << n << ' ' << m << endl;

    while (m--)
    {
        int u = rand_int(1, n), v;

        if (test_number <= 12)
            v = rand_int(u, n);
        else 
            v = rand_int(1, n);
            
        cout << u << ' ' << v << endl;
    }
}