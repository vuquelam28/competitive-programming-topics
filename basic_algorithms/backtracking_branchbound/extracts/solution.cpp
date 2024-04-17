#include <bits/stdc++.h>

using namespace std;

const int maxn = 31;
int num[maxn], sum[maxn];

void printf_result(int cnt, int n)
{
    cout << n << " = ";
    for (int i = 1; i < cnt; i++)
        cout << num[i] << " + ";
    cout << num[cnt] << endl;
}

void recur(int i, int n)
{
    for (int j = num[i - 1]; j <= (n - sum[i - 1]) / 2; j++)
    {
        num[i] = j;
        sum[i] = sum[i - 1] + j;
        recur(i + 1, n);
    }
    num[i] = n - sum[i - 1];

    printf_result(i, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    num[0] = 1;
    recur(1, n);

    return 0;
}


