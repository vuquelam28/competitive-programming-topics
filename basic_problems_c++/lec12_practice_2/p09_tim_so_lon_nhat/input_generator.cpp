#include <bits/stdc++.h>
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

    if (test_number <= 6) {
        // test case ngau nhien cho sub 1
        vmax = 50;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 2
        vmax = 1000;
    }

    int l = rand_int(1, vmax);
    string s;

    if (test_number <= 6)
    {
        int t = rand_int(1, 2);
        if (t == 1)
            s += (char) (rand_int(97, 122));
        else 
            s += (char) (rand_int(49, 57));

        for (int i = 1; i < l; ++i)
        {
            if ('0' <= s[i - 1] && s[i - 1] <= '9')
                s += (char) (rand_int(97, 122));
            else 
            {
                int t = rand_int(1, 2);
                if (t == 1)
                    s += (char) (rand_int(97, 122));
                else 
                    s += (char) (rand_int(49, 57));
            }  
        }
    }
    else 
    {
        while (s.size() <= l)
        {
            int t = rand_int(1, 5);
            if (t <= 4 || (!s.empty() && '0' <= s.back() && s.back() <= '9'))
            {
                s += (char) (rand_int(97, 122));
            }
            else 
            {
                long long v = 1e18;
                long long num = rand_int(1, v);
                s += to_string(num);
            }
        }
    }

    while (s.size() > l)
        s.pop_back();

    cout << s;
}