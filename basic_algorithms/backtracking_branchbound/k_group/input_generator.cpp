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

    int vmax = 10, vmax1;

    int ok = rand_int(1, 2);
    if (ok == 1)
        vmax1 = 10;
    else
        vmax1 = 100;

    int n = rand_int(1, 10);
    int k;

    if (n <= 5)
        k = rand_int(1, n);
    else 
        k = rand_int(1, 3);
    
    cout << n << ' ' << k << endl;

    for (int i = 1; i <= n; ++i)
        cout << rand_int(1, vmax1) << ' ';
}