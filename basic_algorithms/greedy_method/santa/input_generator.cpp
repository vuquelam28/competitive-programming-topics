#include <bits/stdc++.h>
#include <unordered_set>
#include <iostream>
#include <sys/time.h>
#define int long long
using namespace std;

bool seeded = false;

vector < pair < int, int > > listE;
bool mark[500], inCircuit[500];

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

bool isEulerGraph(int N)
{
    for (int u = 1; u <= N; ++u)
	if (!inCircuit[u])	
	    return false;
   
    return true;
}

main()
{
    freopen("Santa.inp", "w", stdout);
    int K = rand_int(1, 50000), N = rand_int(K, 2 * K);
    cout << N << ' ' << K << endl;
 
    for (int i = 1; i <= N; ++i)
	cout << rand_int(1, 1000000) << ' ';   
}

