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
        vmax = 100;
    } else if (test_number <= 6) {
        // test case ngau nhien cho sub 2
        vmax = 100000;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 3
        vmax = 200;
    }

    if (test_number <= 6)
    {
        int a = rand_int(0, vmax), b = rand_int(a, vmax);
        cout << a << endl << b;
    }
    else 
    {
        int t = rand_int(1, 3);
        if (t == 1)
        {
            cout << 1 << endl;
            int l = rand_int(2, vmax);
            cout << rand_int(1, 9);
            for (int i = 1; i < l; ++i)
                cout << rand_int(0, 9);
        }
        else if (t == 2)
        {
            cout << 0 << endl;
            int l = rand_int(2, vmax);
            cout << rand_int(1, 9);
            for (int i = 1; i < l; ++i)
                cout << rand_int(0, 9);
        }
        else 
        {
            int l = rand_int(1, vmax);
            int first_digit = rand_int(1, 8);
            cout << first_digit;
            for (int i = 1; i < l; ++i)
                cout << rand_int(0, 9);

            cout << endl;
            int first_digit_2 = rand_int(first_digit + 1, 9);
            l = rand_int(1, vmax);
            cout << first_digit_2;
            for (int i = 1; i < l; ++i)
                cout << rand_int(0, 9);
        }
    }
}