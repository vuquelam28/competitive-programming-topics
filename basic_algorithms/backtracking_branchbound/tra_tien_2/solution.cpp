#include <bits/stdc++.h>
#define task "ATM2."
#define inf 1e9 + 7

using namespace std;
const int maxn = 21;
int n, S, cnt, cnt_best, sum, a[maxn], mark[maxn], mark_best[maxn], maxmoney[maxn];

void enter()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> S;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

void create()
{
    // maxmoney[i] = to tien co gia tri lon nhat tu vi tri i toi vi tri n
    // cnt_best la so to tien it nhat phai tra, ban dau cnt_best = n + 1 (chua co cach tra)
    cnt_best = n + 1;
    maxmoney[n] = a[n];
    for (int i = n - 1; i >= 0; --i)
        maxmoney[i] = max(maxmoney[i + 1], a[i]);
}

void update()
{
    // Neu tim duoc mot cach tra tien co so to tien it hon cach truoc do thi cap nhat cach moi
    if (sum == S && cnt < cnt_best)
    {
        cnt_best = cnt;
        for (int i = 1; i <= n; ++i)
            mark_best[i] = mark[i]; // Thu nhan cach chon nay va danh dau len mang mark_best
    }
}

void printf_result()
{
    if (cnt_best == n + 1) // Khong tim duoc cach tra tien
        cout << -1;
    else
    {
        cout << cnt_best << endl;
        for (int i = 1; i <= n; ++i)
            if (mark_best[i])
                cout << a[i] << ' ';
    }
}

void recur(int i)
{
    if (cnt + (S - sum) / maxmoney[i] >= cnt_best)
        return; // Neu cach chon nay co so to toi thieu lon hon cach chon truoc => bo khong xet nua
    for (int j = 0; j <= 1; ++j)
    {
        sum = sum + a[i] * j; // Chon hoac khong chon to tien thu i
        mark[i] = j;
        cnt += j; // Dem so to tien da su dung
        if (i == n) // Neu da chon xong N to tien thi update best solution
            update();
        else
            if (sum <= S) recur(i + 1); // Neu chua xd xong nghiem thi tiep tuc
        sum -= a[i] * j; // Loai bo truong hop cua to tien thu i de chon truong hop khac
        cnt -= j;
    }
}

int main()
{
    enter();
    create();
    recur(1);
    printf_result();
    return 0;
}



