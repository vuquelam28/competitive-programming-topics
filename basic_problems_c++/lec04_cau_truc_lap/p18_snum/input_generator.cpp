#include <bits/stdc++.h>
#include <unordered_set>
#include <iostream>
#include <sys/time.h>
#define int long long
using namespace std;

bool seeded = false;
int mark[1000000];

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
    freopen("SNum.inp", "w", stdout);
    int T = rand_int(1, 100000);
    cout << T << endl;

    while (T--)
    {
	int N = rand_int(1, 1000000000);
	cout << N << endl;
    }
}

