#include <bits/stdc++.h>
#define task "StackGame."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
typedef pair < int, int > II;
const int maxn = 1e5 + 10;
int M, N;
long long X, A[maxn], B[maxn], prefixSum[maxn];

void enter()
{
    cin >> M >> N >> X;
    for (int i = 1; i <= M; ++i)
        cin >> A[i];
    for (int i = 1; i <= N; ++i)
    {
        cin >> B[i];
        prefixSum[i] = prefixSum[i - 1] + B[i];
    }
}

void solve()
{
    long long totalSum = 0, maxTotalPoint = 0;

    for (int i = 0; i <= M; ++i)
    {
        totalSum += A[i]; // Thử loại bỏ thêm 1 số ở stack thứ nhất, tổng sẽ cộng thêm số này.
        if (totalSum > X) // Nếu tổng đã bị lớn hơn X => Trò chơi dừng lại.
            break;
        /*
          Tìm kiếm nhị phân sử dụng hàm upper_bound tìm vị trí j nhỏ nhất có prefixSum[j] > X - totalSum. Khi đó j - 1
          chính là vị trí j lớn nhất thỏa mãn prefixSum[j] <= X - totalSum.
        */
        int j = upper_bound(prefixSum + 1, prefixSum + 1 + N, X - totalSum) - prefixSum - 1;
        maxTotalPoint = max(maxTotalPoint, (long long)i + j);
    }

    cout << maxTotalPoint << endl;
}

int main()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int nTest;
    cin >> nTest;
    while (nTest--)
    {
        enter();
        solve();
    }
    return 0;
}


