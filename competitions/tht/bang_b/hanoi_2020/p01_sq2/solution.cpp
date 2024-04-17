#include <bits/stdc++.h>
#define task "SQ2."
#define inf 1e9 + 7

using namespace std;
const int maxn = 2e7;
long long a, b, n, pos, loopStart, quotient[maxn];
int cnt, mark[maxn];

void enter()
{
    //freopen(task"inp", "r", stdin);
    //freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> a >> b >> n;
}

void solve()
{
    // Mang mark luu vi tri xuat hien cua so du a % b, bat dau tu vi tri 1.
    mark[a % b] = ++pos; 
    a %= b;

    // Cach luu tru thuong va so du tiep tuc theo phuong phap dat tinh cua tieu hoc.
    while (true) 
    {
        a *= 10;
        long long r = a % b;
        quotient[++cnt] = a / b;
        if (mark[r]) // So du da lap lai
        {
            loopStart = mark[r]; // Luu tru vi tri bat dau cua chu ky thap phan
            break;
        }
        else
            mark[r] = ++pos, a = r; // Neu chua lap lai so du thi tiep tuc chia va luu tru thuong + so du
    }

    long long res = 0;
    if (n <= cnt)
    {
        for (int i = 1; i <= n; ++i)
            res += quotient[i];
        cout << res;
    }
    else
    {
        long long loopSum = 0;
        n -= (loopStart - 1);
        for (int i = 1; i < loopStart; ++i)
            res += quotient[i];
        for (int i = loopStart; i <= cnt; ++i)
            loopSum += quotient[i];

        long long loopLength = (cnt - loopStart + 1);
        res += loopSum * (n / loopLength);
        n %= loopLength;
        for (int i = loopStart; i < loopStart + n; ++i)
            res += quotient[i];

        cout << res;
    }
}

int main()
{
    enter();
    solve();
    return 0;
}
