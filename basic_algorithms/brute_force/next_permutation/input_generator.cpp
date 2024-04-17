#include <iostream>
#include <sys/time.h>
using namespace std;

bool seeded = false;
int mark[20000];

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
        vmax = 10;
    } else if (test_number <= 10) {
        // test case ngau nhien cho sub 2
        vmax = 200;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 3
        vmax = 10000;
    }

    int n = rand_int(1, vmax);
    cout << n << endl;

    for (int i = 1; i <= n; ++i)
    {
        int v = rand_int(1, n);
        while (mark[v])
            v = rand_int(1, n);

        mark[v] = 1;
        
        cout << v << ' ';
    }
}