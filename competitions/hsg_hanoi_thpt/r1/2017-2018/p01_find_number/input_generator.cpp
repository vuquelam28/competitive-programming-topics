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

int main()
{
    // nhap vao mot so nguyen duong duy nhat la so thu tu cua test case, bat dau tu 1
    int test_number;
    cin >> test_number;

    if (test_number <= 6) {
        int vmax = 1e9;
        int t = rand_int(2, vmax), h = rand_int(1, t - 1);
        while ((t % 2 == 0 && h % 2 == 1) || (t % 2 == 1 && h % 2 == 0))
            h = rand_int(1, t - 1);

        cout << t << endl << h;
    } else if (test_number <= 20) {
        // test case ngau nhien cho sub 2
        int lmax = 100;
        int l1 = rand_int(2, lmax), l2 = rand_int(1, l1 - 1);
        string t = to_string(rand_int(1, 9)), h = to_string(rand_int(1, 9));
        for (int i = 1; i < l1 - 1; ++i)
            t += (char) (rand_int(0, 9) + '0');
        for (int i = 1; i < l2 - 1; ++i)
            h += (char) (rand_int(0, 9) + '0');

        int last_d1 = rand_int(0, 9), last_d2 = rand_int(0, 9);
        while ((last_d1 % 2 == 0 && last_d2 % 2 == 1) || (last_d1 % 2 == 1 && last_d2 % 2 == 0))
            last_d2 = rand_int(0, 9);
        
        t += (char) (last_d1 + 48);
        h += (char) (last_d2 + 48);
        
        cout << t << endl << h;
    }
}