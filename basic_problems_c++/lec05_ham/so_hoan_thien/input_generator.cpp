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

    if (test_number <= 5) {
        // test case ngau nhien cho sub 1
        vmax = 100;
    } else if (test_number <= 10) {
        // test case ngau nhien cho sub 2
        vmax = 100000;
    } else if (test_number <= 15) {
        // test case ngau nhien cho sub 3
        vmax = 10000000;
    } else {
        // test case ngau nhien cho sub 4
        vmax = 2 << 31 - 1;
    }

    int a = rand_int(0, vmax);
    int b = rand_int(0, vmax);
    int m = rand_int(1, 46340);
    cout << a << " " << b << " " << m;
}