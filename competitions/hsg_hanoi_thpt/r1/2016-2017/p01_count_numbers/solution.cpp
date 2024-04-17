#include <bits/stdc++.h>
#define int long long
#define task "BAI1_1617."
#define inf 1e9 + 7

using namespace std;
typedef pair < int, int > II;
const int maxn = 1e6 + 10;
int N, X, Y, A[maxn], U[maxn], cnt[maxn], mark[maxn];
vector < int > primeU;

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> N >> X >> Y;
    for (int i = 1; i <= N; ++i)
    {
        cin >> A[i];
        cnt[A[i]]++;
    }
}

void eratos(int maxN)
{
    mark[0] = mark[1] = 1;

    for (int i = 2; i <= sqrt(maxN); ++i)
        if (mark[i] == 0)
            for (int j = i * i; j <= maxN; j += i)
                mark[j] = 1;
}

void solve()
{
    sort(A + 1, A + 1 + N);
    eratos(A[N]); // Tạo sàng số nguyên tố từ 1 tới max(A[i]).
    U[1] = X;
    if (mark[U[1]] == 0)
        primeU.push_back(U[1]);
    for (int i = 2; U[i - 1] + Y <= A[N]; ++i) // Tạo ra dãy U có số lớn nhất là U[m] >= max(A[i]).
    {
        U[i] = U[i - 1] + Y;
        if (mark[U[i]] == 0)
            primeU.push_back(U[i]); // Lọc ra các số nguyên tố trong dãy U để đưa vào vector primeU.
    }

    int res = 0;
    for (int i = 0; i < primeU.size(); ++i)
        res += cnt[primeU[i]];

    cout << res;
}

main()
{
    enter();
    solve();
    return 0;
}