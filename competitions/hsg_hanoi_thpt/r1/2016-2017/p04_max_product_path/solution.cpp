#include <bits/stdc++.h>
#define int long long
#define task "BAI4_1617."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxN = 201, maxL = 1010;
int M, N, A[maxN][maxN], P1[maxL], P2[maxL], res[2 * maxL];
string B[maxN][maxN];

void enter()
{
    cin >> M >> N;
    for (int i = 1; i <= M; ++i)
        for (int j = 1; j <= N; ++j)
            cin >> A[i][j];
}

string intToString(int A) // Chuyển đổi từ số sang xâu kí tự.
{
    string res;

    while (A != 0)
    {
        res = (char)(A % 10 + '0') + res;
        A /= 10;
    }

    return res;
}

string maxBinary(string T1, string T2, string T3) // So sánh 3 xâu nhị phân, chọn ra xâu lớn nhất.
{
    int maxLength = max(T1.size(), max(T2.size(), T3.size()));

    while (T1.size() < maxLength)
        T1 = '0' + T1;
    while (T2.size() < maxLength)
        T2 = '0' + T2;
    while (T3.size() < maxLength)
        T3 = '0' + T3;

    string ans = T1;
    if (T2 > ans)
        ans = T2;
    if (T3 > ans)
        ans = T3;

    return ans;
}

// Nhân hai số lớn ở hệ nhị phân, biến đổi từ nhân hệ thập phân sang.
string bigMultiply(string s1, string s2)
{
    s1 = '0' + s1;
    s2 = '0' + s2;
    fill(res, res + s1.size() + s2.size(), 0);

    for (int i = s2.size() - 1; i >= 1; --i)
    {
        for (int j = s1.size() - 1; j >= 1; --j)
        {
            int digit = (s2[i] - '0') * (s1[j] - '0');
            res[i + j - 1] += digit;
            res[i + j - 2] += res[i + j - 1] / 2;
            res[i + j - 1] %= 2;
        }
    }

    string bigProduct;
    int start = (res[0] != 0) ? 0 : 1;
    for (int i = start; i <= s1.size() + s2.size() - 3; ++i)
        bigProduct += (char)(res[i] + '0');

    return bigProduct;
}

void solution()
{
    for (int j = 1; j <= N; ++j)
        B[1][j] = intToString(A[1][j]);

    for (int i = 2; i <= M; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            string p1 = intToString(A[i][j]), p2 = maxBinary(B[i - 1][j - 1], B[i - 1][j], B[i - 1][j + 1]);
            B[i][j] = bigMultiply(p1, p2);
        }
    }

    string maxProduct;
    for (int j = 1; j <= N; ++j)
        if (maxProduct.size() < B[M][j].size() || (maxProduct.size() == B[M][j].size() && maxProduct < B[M][j]))
            maxProduct = B[M][j];

    cout << maxProduct;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}


