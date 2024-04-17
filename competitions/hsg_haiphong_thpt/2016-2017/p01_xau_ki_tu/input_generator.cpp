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

    if (test_number <= 4) {
        // test case ngau nhien cho sub 1
        vmax = 10;
    } else if (test_number <= 12) {
        // test case ngau nhien cho sub 2
        vmax = 100;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 3
        vmax = 1000;
    }

    int n = rand_int(1, vmax);
    for (int i = 1; i <= n; ++i)
    {
        int t = rand_int(1, 3);
        if (t == 1)
            cout << (char) (rand_int(97, 122));
        else if (t == 2)
            cout << (char) (rand_int((int) 'A', (int) 'Z'));
        else 
            cout << rand_int(0, 9);
    }
}