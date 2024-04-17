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

string aphabet = "abcdefghijklmnopqrstuvwxyz";

string rand_str(int len)
{
    string s;
    for(int i = 0; i < len; ++i) s += char(rand_int('a', 'z'));
    return s;
}

string rand_str1(int l, int r, int len)
{
    random_shuffle(aphabet.begin(), aphabet.end());
    string s;
    for(int i = 0; i < len; ++i) s += aphabet[rand_int(l, r)];
    return s;
}

int main()
{
    int t = rand_int(1, 100);
    cout << t << '\n';
    while(t--)
    {
        int n = rand_int(10, 100);
        int ff = rand_int(0, 1);
        if(ff) cout << rand_str(n) << '\n' << rand_str(n) << '\n';
        else
        {
            int m = rand_int(0, 24);
            cout << rand_str1(0, m, n) << '\n' << rand_str1(m + 1, 25, n) << '\n';
        }
    }
}
