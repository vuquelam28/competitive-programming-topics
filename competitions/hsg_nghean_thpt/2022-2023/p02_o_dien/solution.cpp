#pragma GCC optimize("O2")
#include <bits/stdc++.h>

using namespace std;
int n, m, a[1001];

void enter()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

void solution()
{
    sort(a + 1, a + n + 1);

    if (m == 1)
    {
        cout << 0;
        return;
    }

    int remain = 1; // Ban dau so luong cho cam = 1 - chinh la noi co dien.
    int i = 1;
    while (i <= n)
    {
        if (remain >= m) // Neu da du cho cam thi in ra so luong o cam dai can dung la i - 1.
        {
            cout << i - 1;
            return;
        }

        remain = remain + a[i] - 1;
        // Neu k du cho thi cam them o dai thu i => Mat mot cho cam va co them a[i] cho cam.
        ++i;
    }

    if (remain < m) 
        cout << -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}


