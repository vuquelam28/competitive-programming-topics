/*
n = int(input())
a = [int(v) for v in input().split()]

kt = True
tam = n // 2
for i in range(tam + 1):
    if a[i] != a[n - i - 1]:
        kt = 0
        break

if kt:
    print("YES")
else:
    print("NO")
*/

#include <iostream>

using namespace std;

const int maxn = 1000;
int a[maxn];

main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i <= n / 2; ++i)
        if (a[i] != a[n - i + 1])
        {
            cout << "NO";
            return 0;
        }

    cout << "YES";
}