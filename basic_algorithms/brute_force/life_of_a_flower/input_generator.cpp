#include <iostream>
#include <vector>
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
    int nmin, nmax, tmax;

    if (test_number <= 5) {
        // test case ngau nhien cho sub 1
        tmax = 1;
        nmax =  10;
    } else if (test_number <= 10) {
        // test case ngau nhien cho sub 2
        tmax = 10;
        nmax = 50;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 3
        tmax = 100;
        nmax = 100;
    }

    int t = rand_int(1, tmax);
    cout << t << endl;
    
    while (t--)
    {
        int n = rand_int(1, nmax);
        cout << n << endl;

        int res = rand_int(0, 1);

        if (res == 0)
        {
            for (int i = 1; i <= n; ++i)
                cout << rand_int(0, 1) << ' ';

            cout << endl;
        }
        else 
        {
            vector < int > a;
            for (int i = 1; i <= n; ++i)
            {
                int x = rand_int(0, 1);
                if (a.empty())
                    a.push_back(x);
                else 
                {
                    if (a.back() == 0)
                        a.push_back(1);
                    else 
                        a.push_back(x);
                }
            }

            for (int e: a)
                cout << e << ' ';

            cout << endl;
        }
    }
}