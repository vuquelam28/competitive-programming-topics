#include <bits/stdc++.h>
#include <unordered_set>
#include <iostream>
#include <sys/time.h>
#define int long long
using namespace std;

bool seeded = false;
int mark[1000001];
struct edge
{
    int s, f, w;
};

vector < edge > listE;
vector < int > comps[6];

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

main()
{
    freopen("Orange.inp", "w", stdout);
    int N = rand_int(1, 100000);
    cout << N << endl;

    for (int i = 1; i <= N; ++i)
    {
	int p = rand_int(1, 1000000);

	cout << p << ' ';
    }
}

