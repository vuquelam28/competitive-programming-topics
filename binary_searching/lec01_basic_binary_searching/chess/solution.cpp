#include <bits/stdc++.h>
#define task "CHESS."
#define inf 1e9 + 7
#define int long long

using namespace std;
const int maxn = 1e5 + 10;
int n, ntest, U[maxn], V[maxn];
pair < int, int > p[maxn], sum[maxn];

void enter()
{
    cin >> n >> ntest;

    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i].first >> p[i].second;
        U[i] = p[i].first + p[i].second;
        V[i] = p[i].first - p[i].second;
    }

    sort(U + 1, U + 1 + n);
    sort(V + 1, V + 1 + n);

    for (int i = 1; i <= n; ++i)
    {
        sum[i].first = sum[i - 1].first + U[i]; // Sum[i].first = Tong tien to cua U[i];
        sum[i].second = sum[i - 1].second + V[i]; // Sum[i].second = Tong tien to cua V[i];
    }
}

main()
{
    /* Solution
     Sub 1: Duong di ngan nhat tu (x1, y1) => (x2, y2) la max(|x1 - x2|, |y1 - y2|). Sub nay chi can duyet thong thuong
     Sub 2:
        Dat u = x + y, v = x - y;
        => u + v = 2x, u - v = 2y;

        max(|x1 - x2|, |y1 - y2|) = max(|u1 + v1 - u2 - v2|, |u1 - v1 - u2 + v2|) / 2;
                                  = max(|(u1 - u2) + (v1 - v2)|, |(u1 - u2) - (v1 - v2)|) / 2;
                                  = (|u1 - u2| + |v1 - v2|) / 2;
        (Do |u| + |v| >= |u + v|; |u - v| >= |u| - |v|; |u| + |v| >= |u| - |v|) => max(|u + v|, |u - v|) = |u| + |v|;

        Luc nay Res = Sum(|ui - uDes| + |vi - vDes|) / 2; (Des la dich den)
                    = 1/2 * Sum(|ui - uDes|) + 1/2 * Sum(vi - vDes);
                    Voi ui, uDes, vi, vDes lan luot la xi + yi, ai + bi, xi - yi, ai - bi;
        Ta xay dung cac mang u, v cua cac diem ban dau, sap xep tang dan + mang cong don, roi tim kiem nhi phan de tinh
        toan ra ket qua voi moi cau hoi. Do phuc tap O((Q +n) * logn);
    */

    //freopen(task"inp", "r", stdin);
    //freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    enter();

    while (ntest--)
    {
        int a, b;
        cin >> a >> b;
        int uDes = a + b, vDes = a - b;
        int posU = lower_bound(U + 1, U + 1 + n, uDes) - U, posV = lower_bound(V + 1, V + 1 + n, vDes) - V;
        // posU la vi tri dau tien ma U[i] >= uDes, posV la vi tri dau tien ma V[i] >= vDes;
        int leftSum_U = sum[posU - 1].first, rightSum_U = sum[n].first - sum[posU - 1].first;
        int leftSum_V = sum[posV - 1].second, rightSum_V = sum[n].second - sum[posV - 1].second;

        int sumU = (posU - 1) * uDes - leftSum_U + rightSum_U - (n - posU + 1) * uDes;
        int sumV = (posV - 1) * vDes - leftSum_V + rightSum_V - (n - posV + 1) * vDes;

        cout << (sumU + sumV) / 2 << endl;
    }

    return 0;
}


