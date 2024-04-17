#include <iostream>
#include <sys/time.h>
#include <bits/stdc++.h>
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

int main()
{
    // nhap vao mot so nguyen duong duy nhat la so thu tu cua test case, bat dau tu 1
    int test_number;
    cin >> test_number;
    int nmax, vmax;

    if (test_number <= 4) {
        // test case ngau nhien cho sub 1
        nmax = 10;
        vmax = 100;
    } else if (test_number <= 8) {
        // test case ngau nhien cho sub 2
        nmax = 100;
        vmax = 10000;
    } else if (test_number <= 12) {
        // test case ngau nhien cho sub 3
        nmax = 1000;
        vmax = 1e9 - 1;
    } else if (test_number <= 16) {
        // test case ngau nhien cho sub 4
        nmax = 1000;
        vmax = 1000000;
    } else if (test_number <= 20) {
        nmax = 1000;
        vmax = 1e9 - 1;
    }

    int m = rand_int(2, nmax), n = rand_int(2, nmax);
    cout << m << ' ' << n << endl;
    int x = rand_int(1, m), y = rand_int(1, n), z = rand_int(1, m), t = rand_int(1, n);
    while (x == z && y == t)
        z = rand_int(1, m), t = rand_int(1, n);

    cout << x << ' ' << y << ' ' << z << ' ' << t << endl;

    vector < vector < int > > a(m + 1, vector < int >(n + 1));
    if (test_number <= 12)
    {
        map < int, int > mark;
        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                a[i][j] = rand_int(0, vmax);
                while (mark.find(a[i][j]) != mark.end())
                    a[i][j] = rand_int(0, vmax);
                mark[a[i][j]] = 1;
            }
        }
    }
    else if (test_number <= 16)
    {
        map < int, int > mark;
        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                a[i][j] = rand_int(0, vmax);
                while (mark.find(a[i][j]) != mark.end() && mark[a[i][j]] == 2)
                    a[i][j] = rand_int(0, vmax);
                
                if (mark.find(a[i][j]) != mark.end())
                    mark[a[i][j]]++;
                else 
                    mark[a[i][j]] = 1;
            }
        }
    }
    else if (test_number <= 20)
    {
        vector < vector < pair < int, int > > > same_num(10001);
        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                a[i][j] = rand_int(0, 10000);
                same_num[a[i][j]].push_back({i, j});
            }
        }

        for (int v = 0; v <= 10000; ++v)
            if (!same_num[v].empty())
            {
                int k = rand_int(0, vmax);
                for (auto u: same_num[v])
                    a[u.first][u.second] = k;
            }
    }

    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}