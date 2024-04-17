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
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 2
        vmax = 1000;
    }

    int l1 = rand_int(1, vmax);
    int l2 = rand_int(1, l1);

    string x;
    for (int i = 1; i <= l2; ++i)
        x += (char) (rand_int(97, 122));

    int t = rand_int(1, 2);
    string s;

    if (t == 1)
    {
        for (int i = 1; i <= l1; ++i)
            s += (char) (rand_int(97, 122));
    }
    else 
    {
        while (s.size() <= l1)
        {
            int g = rand_int(1, 10);
            if (g <= 7)
                s += (char) (rand_int(97, 122));
            else 
                s += x;
        }
    }

    while (s.size() > l1)
        s.pop_back();

    cout << s << endl << x;
}