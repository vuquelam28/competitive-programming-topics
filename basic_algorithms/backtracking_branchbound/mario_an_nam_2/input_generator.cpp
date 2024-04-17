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

int a[105][105];

int main()
{
    int test_number;
    cin >> test_number;
    int n = rand_int(1, 100);
    int m = rand_int(1, 100);
    if(test_number <= 5)
    {
        n = rand_int(5, 8);
        m = rand_int(5, 8);
    }
    int k = rand_int(1, min(n * m, 25));

    set<pair<int, int> > s;
    while(s.size() != k) s.insert({rand_int(1, n), rand_int(1, m)});
    for(auto u : s)
    {
        a[u.X][u.Y] = rand_int(1, 100);
    }
    cout << n << ' ' << m << '\n';
    for(int i = 1; i <= n; ++i) 
    {
        for(int j = 1; j <= m; ++j)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
