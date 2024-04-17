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

int a[1005][1005];

int main()
{
    int test_number;
    cin >> test_number;

    int maxn = 1e3, maxa = 1e9;

    if(test_number <= 3) maxn = 10;
    else if (test_number <= 6) maxn = 50;

    int n = rand_int(1, maxn);
    int m = rand_int(1, maxn);

    cout << n << ' ' << m << '\n';



    FOR(i, 1, n)
        FOR(j, 1, m) a[i][j] = rand_int(10, maxa - 10);

    int q = rand_int(1, min(n, m));
    //int q = 1;
    set <int> r;
    set <int> c;
    while(SZ(r) != q) r.insert(rand_int(1, n));
    while(SZ(c) != q) c.insert(rand_int(1, m));
    vector <int> R (r.begin(), r.end());
    vector <int> C (c.begin(), c.end());
    //random_shuffle(R.begin(), R.end());
    //random_shuffle(C.begin(), C.end());

    REP(i, q)
    {

        int rr = R[i], cc = C[i];
        int maxv = a[rr][cc];
        //cout << rr << ' ' << cc << '\n';
        FOR(j, 1, m) if(j != cc) a[rr][j] = min(a[rr][j], (int)rand_int(1, maxv - 1));
        FOR(j, 1, n) if(j != rr) a[j][cc] = max(a[j][cc], (int)rand_int(maxv + 1, maxa));
    }

    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    //cout << q << '\n';

    return 0;
}