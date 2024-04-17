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
    int test_number; cin >> test_number;
    int n;
    if(test_number <= 10) n = rand_int(2, 1000);
    else n = rand_int(1001, 5e4);
    cout << n << '\n';
    int a[n];
    for(int i = 0; i < n; ++i) a[i] = rand_int(1, 1e9);
    if(test_number % 2 == 0) sort(a, a + n);
    for(int i = n - 1; i >= 0; i--) cout << a[i] << '\n';
}
