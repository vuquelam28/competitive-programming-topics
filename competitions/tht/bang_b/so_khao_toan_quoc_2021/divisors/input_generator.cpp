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
    freopen("divisors.inp", "w", stdout);
    int a[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}; 
    int M = 25;
    cout << M << endl;

    for (int i = 0; i < M; ++i)
	cout << a[i] << ' ' << rand_int(1, 1000000000) << endl;

    for (int i = 1; i <= 3; ++i)
    {
	int A = rand_int(1, 100), B = rand_int(A, 1000000000);
        cout << A << ' ' << B << endl;
    }
}

