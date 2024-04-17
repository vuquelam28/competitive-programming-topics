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
    int vmax;

    if (test_number <= 3) {
        // test case ngau nhien cho sub 1
        vmax = 10;
    } else if (test_number <= 6) {
        // test case ngau nhien cho sub 2
        vmax = 1000;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 3
        vmax = 1e9;
    }

    int a = rand_int(1, vmax);
    int b = rand_int(a, vmax);
    int k = rand_int(1, vmax);

    cout << a << ' ' << b << ' ' << k;
}