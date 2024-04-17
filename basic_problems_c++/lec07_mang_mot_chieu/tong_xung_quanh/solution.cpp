/*
n = int(input())
a = [int(v) for v in input().split()]


def tong(n):
    S = 0
    if n == 1:
        return S
    if a[0] > a[1]:
        S += a[0]
    if a[n - 1] > a[n - 2]:
        S += a[n - 1]
    for i in range(1, n - 1):
        if a[i - 1] < a[i] > a[i + 1]:
            S += a[i]
    return S


print(tong(n))
*/
#include <iostream>

using namespace std;

const int maxn = 1001;
int a[maxn];

main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int sum = 0;
    if (a[1] > a[2])
        sum += a[1];
    if (a[n] > a[n - 1])
        sum += a[n];
    for (int i = 2; i < n; ++i)
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
            sum += a[i];

    cout << sum;
}