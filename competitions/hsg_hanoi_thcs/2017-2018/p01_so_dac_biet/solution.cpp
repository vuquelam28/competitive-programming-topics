#include <bits/stdc++.h>
#define task "SpecialNumber."
#define inf 1e9 + 7

using namespace std;
const int maxn = 1000;
int n;

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
}

bool check(int n) // Kiem tra n co phai sdb hay khong
{
    int sum = 0;
    while (n != 0)
    {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    for (int i = 2; i <= sqrt(sum); ++i)
        if (sum % i == 0)
            return false;
    return true;
}

void solve()
{
    n = n + 1;
    while (!check(n))
        ++n;
    cout << n;
}

int main()
{
    enter();
    solve();
    return 0;
}