#include <bits/stdc++.h>
#define int long long
#define task "MovingTree."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxN = 110;
int m, n, t, a[maxN][maxN], rowLeft[maxN][maxN], rowRight[maxN][maxN], colUp[maxN][maxN], colDown[maxN][maxN];

void Enter()
{
    cin >> m >> n >> t;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
}

void TreeLine()
{
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
        {
            rowLeft[i][j] = (a[i][j - 1] == a[i][j]) ? rowLeft[i][j - 1] + 1 : 1;
            colDown[i][j] = (a[i - 1][j] == a[i][j]) ? colDown[i - 1][j] + 1 : 1;
        }

    for (int i = m; i >= 1; --i)
        for (int j = n; j >= 1; --j)
        {
            rowRight[i][j] = (a[i][j] == a[i][j + 1]) ? rowRight[i][j + 1] + 1 : 1;
            colUp[i][j] = (a[i][j] == a[i + 1][j]) ? colUp[i + 1][j] + 1 : 1;
        }
}

void FindTreeToMove()
{
    int treeNeedMoving = 0;

    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            if (a[i][j] > 0)
            {
                int horizontalLine = 1, verticalLine = 1;

                if (a[i][j - 1] == a[i][j])
                    horizontalLine += rowLeft[i][j - 1];
                if (a[i][j + 1] == a[i][j])
                    horizontalLine += rowRight[i][j + 1];
                if (a[i - 1][j] == a[i][j])
                    verticalLine += colDown[i - 1][j];
                if (a[i + 1][j] == a[i][j])
                    verticalLine += colUp[i + 1][j];

                if (horizontalLine < t && verticalLine < t)
                    ++treeNeedMoving;
            }

    cout << treeNeedMoving;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Enter();
    TreeLine();
    FindTreeToMove();

    return 0;
}