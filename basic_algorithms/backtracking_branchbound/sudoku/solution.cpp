#include <bits/stdc++.h>
#define task "Sudoku."
#define inf 1e9 + 7

using namespace std;
const int maxn = 10;
int a[maxn][maxn];
bool result = false;

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    for (int i = 1; i <= 9; ++i)
        for (int j = 1; j <= 9; ++j)
            cin >> a[i][j];
}

// Kiểm tra xem nếu đặt số c vào hàng x, cột y thì có vi phạm quy tắc trò chơi không.
bool check(int x, int y, int c)
{
    // Kiểm tra trong cột y có chứa số giống c không.
    for (int i = 1; i <= 9; ++i)
        if (a[i][y] == c) return false;
    
    // Kiểm tra xem hàng x có chứa số giống c không.
    for (int j = 1; j <= 9; ++j)
        if (a[x][j] == c) return false;

    // Kiểm tra hình vuông 3 * 3 chứa ô (x, y) có tồn tại số c không.
    int row = (x - 1) / 3, col = (y - 1) / 3;
    for (int i = 3 * row + 1; i <= 3 * row + 3; ++i)
        for (int j = 3 * col + 1; j <= 3 * col + 3; ++j)
            if (a[i][j] == c) return false;

    return true;
}

void printf_result()
{
    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= 9; ++j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}

// Thử chọn số cho từng ô (x, y) nếu ô đó đang chưa có số. Dùng quay lui.
void solve(int x, int y)
{
    if (result) return;
    if (y == 10)
    {
        if (x == 9)
        {
            printf_result();
            result = true;
        }
        else solve(x + 1, 1);
    }
    else
    {
        if (a[x][y] == 0)
        {
            for (int i = 1; i <= 9; ++i)
                if (check(x, y, i))
                {
                    a[x][y] = i;
                    solve(x, y + 1);
                    a[x][y] = 0;
                }
        }
        else solve(x, y + 1);
    }
}

int main()
{
    enter();
    solve(1, 1);
    return 0;
}


