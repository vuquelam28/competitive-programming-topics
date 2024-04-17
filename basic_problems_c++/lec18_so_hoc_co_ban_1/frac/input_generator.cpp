#include <bits/stdc++.h>
#include <unordered_set>
#include <iostream>
#include <sys/time.h>
#define int long long
using namespace std;

bool seeded = false;
unordered_map < int, bool > is_prime;

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
    freopen("Frac.inp", "w", stdout);
    int N = rand_int(1, 19);
    cout << N << endl;

    for (int i = 1; i <= N; ++i)
	cout << rand_int(1, 10) << ' ';
    cout << endl;

    for (int i = 1; i <= N; ++i)
	cout << rand_int(1, 10) << ' ';
}

