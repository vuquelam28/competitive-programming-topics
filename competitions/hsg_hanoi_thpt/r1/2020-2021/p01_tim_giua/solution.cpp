#include <bits/stdc++.h>
#define int long long
#define task "MidNumber."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
int L, R;

void enter()
{
    cin >> L >> R;
}

bool check_integer(double M)
{
    return (int)M == M;
}

void solution()
{
    double c = -(L * L - L + R * R + R);
    double delta = 4.0 - 4.0 * 2.0 * c;

    double M = (-4.0 + sqrt(delta)) / 4.0; // Lấy giá trị nghiệm dương của phương trình.
    if (check_integer(M))
        cout << (int) M;
    else
        cout << (int) (M + 1);
}

main()
{
    //freopen(task"inp", "r", stdin);
    //freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}