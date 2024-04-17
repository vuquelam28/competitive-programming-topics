#include <bits/stdc++.h>

using namespace std;

int n;
int a[21];
int mark[200005];
int cnt = 0;

void back_tracking(int i, int sum)
{
    if (i > n)
    {
        if (mark[sum] == false)
        {
            ++cnt;
            mark[sum] = true;
        }

        return;
    }
     
    back_tracking(i + 1, sum + a[i]); //chọn a[i]
    back_tracking(i + 1, sum); //không chọn a[i]
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i) 
        cin >> a[i];
    
    back_tracking(1, 0);

    cout << cnt - 1 << '\n'; //trừ 1 giá trị 0 của tập rỗng
    for (int i = 1; i <= 10000 * n; ++i)
        if (mark[i] == true) 
            cout << i << ' ';

    return 0;
}