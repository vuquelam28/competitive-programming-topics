#include <bits/stdc++.h>
#define int long long
#define inf 1e9 + 7
 
using namespace std;
const int maxn = 200010, maxval = 1e6 + 10;

struct Query
{
    int l, r, pos;
};
 
int N, T, length, seq_value, cnt[maxval], a[maxn], res[maxn];
Query queries[maxn];
 
void enter()
{
    cin >> N >> T;
    length = sqrt(N);
 
    for (int i = 1; i <= N; ++i)
        cin >> a[i];
 
    for (int i = 1; i <= T; ++i)
    {
        cin >> queries[i].l >> queries[i].r;
        queries[i].pos = i;
    }
}
 
bool cmp(Query A, Query B) // Sắp xếp các truy vấn theo Mo's Algorithm.
{
    if (A.l / length != B.l / length)
        return A.l < B.l;
    else
        return A.r < B.r;
}
 
void add_value(int pos)
{
    int val = a[pos];
 
    // Thêm 1 phần tử vào => Giá trị từ cnt^2 * val tăng lên (cnt + 1)^2 * val. Tách hằng đẳng thức để tính toán.
    seq_value += 2 * cnt[val] * val + val;
    ++cnt[val];
}
 
void remove_value(int pos)
{
    int val = a[pos];
 
    // Loại 1 phần tử đi => Giá trị từ cnt^2 * val giảm xuống còn (cnt - 1)^2 * val. Tách hằng đẳng thức để tính toán.
    seq_value += val * (1 - 2 * cnt[val]);
    --cnt[val];
}
 
void solution()
{
    sort(queries + 1, queries + T + 1, cmp);
    int l_front = 0, r_front = 0;
 
    // Gọi l_front, r_front là (l, r) của truy vấn trước - ứng với (l1, r1); (l2, r2) là của truy vấn hiện tại.
    for (int k = 1; k <= T; ++k)
    {
        while (l_front < queries[k].l) // l1 < l2: Giảm cnt[A[l1] -> A[l2 - 1]].
        {
            remove_value(l_front);
            ++l_front;
        }
 
        while (l_front > queries[k].l) // l1 > l2. Tăng cnt[A[l2] -> A[l1 - 1]].
        {
            --l_front;
            add_value(l_front);
        }
 
        while (r_front < queries[k].r) // r1 < r2. Tăng cnt[A[r1 + 1] -> A[r2]].
        {
            ++r_front;
            add_value(r_front);
        }
 
        while (r_front > queries[k].r) // r1 > r2. Giảm cnt[A[r2 + 1] -> A[r1]]
        {
            remove_value(r_front);
            --r_front;
        }
 
        res[queries[k].pos] = seq_value;
    }
 
    for (int i = 1; i <= T; ++i)
        cout << res[i] << '\n';
}
 
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    enter();
    solution();
 
    return 0;
}