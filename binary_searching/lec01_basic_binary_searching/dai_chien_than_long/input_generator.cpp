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
    int n = rand_int(1, 2e5);
    cout << n << '\n';
    for(int i = 1;  i <= n; ++i) cout << rand_int(1, 1e12) << ' ';
    int m = rand_int(1, 2e5);
    cout << '\n' << m << '\n';
    for(int i = 1; i <= m; ++i)
    {
        cout << rand_int(1, 1e12) << ' ' << rand_int(1, 1e18) << '\n';
    }
}