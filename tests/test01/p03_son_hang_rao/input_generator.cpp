#include <bits/stdc++.h>
#include <sys/time.h>
using namespace std;

#define FOR(i, a, n) for(int i = a; i <= n; i++)
#define FORD(i, a, n) for(int i = a; i >= n; i--)
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPD(i, n) for(int i = n - 1; i >= 0; i--)
#define FOREACH(i, a) for(auto i : a)

#define SZ(a) (int)a.size()
#define ALL(a) a.begin(), a.end()
#define MS(a, i) memset(a, i, sizeof a)
#define X first
#define Y second
#define PB push_back
#define REV(a) reverse(a.begin(), a.end())
#define MP make_pair
#define II pair<int,int>

#define db(x) #x << " = " << x
#define _ << ", " <<

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

//!"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`abcdefghijklmnopqrstuvwxyz{|}~

string rand_str(int len)
{
    string s;
    for(int i = 0; i < len; ++i) s += char(rand_int('a', 'z'));
    return s;
}

int main()
{
    int test_number;
    cin >> test_number;
    int maxv;
    int minv;
    if(test_number <= 5) minv = 1, maxv = 10;
    else if(test_number <= 15) minv = 400, maxv = 500;
    else if(test_number <= 49) minv = 1000, maxv = 2000;
    else minv = 2000, maxv = 2000;
    int n = rand_int(minv, maxv);
    int m = rand_int(minv, maxv);
    int k = rand_int(minv - 1, n - 1);
    cout << n << ' ' << m << ' ' << k;
    return 0;
}
