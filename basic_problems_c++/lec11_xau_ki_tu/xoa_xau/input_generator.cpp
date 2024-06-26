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

string rand_str(int len)
{
    string s;
    int t = rand_int(0, 1);
    int flag = 0;
    if(len % 2 == 0) flag = rand_int(0, 1);
    for(int i = 1; i <= len; ++i)
    {

        if(flag == 0) s += char(rand_int('A', 'C'));
        else
        {
            if(i > len / 2) s += 'B';
            else s += char(rand_int(0, 1) ? 'A' : 'C');
        }
    }
    random_shuffle(s.begin(), s.end());
    return s;
}

int main()
{
    int t = rand_int(1, 1000);
    cout << t << '\n';
    while(t--)
    {
        cout << rand_str(rand_int(1, 500)) << '\n';
    }
}
