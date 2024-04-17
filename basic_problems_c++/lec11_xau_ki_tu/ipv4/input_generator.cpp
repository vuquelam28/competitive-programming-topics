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
    int nmax, vmax;

    if (test_number <= 5) {
        // test case ngau nhien cho sub 1
        nmax = 10;
        vmax = 1000;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 2
        nmax = 100;
        vmax = 1000000000000000000;
    }

    int t = rand_int(0, 1);

    if (t == 0)
    {
        for (int i = 1; i <= 3; ++i)
            cout << rand_int(0, 255) << '.';
        cout << rand_int(0, 255);
    }
    else 
    {
        int n = rand_int(1, nmax);
        
        string s = "";
        while (true)
        {
            int num = rand_int(0, vmax);
            string st = to_string(num);

            if (s.size() + st.size() + 1 <= n)
                s += st + '.';
            else 
            {
                for (int i = 1; i <= n - s.size(); ++i)
                    s += (char) (rand_int(0, 9) + 48);
                
                break;
            }
        }

        cout << s;
    }
}