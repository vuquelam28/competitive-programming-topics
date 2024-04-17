#include <bits/stdc++.h>

using namespace std;

// Tính tổng các chữ số của một số.
int sum_digit(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += n % 10;
        n /= 10;
    }
    
    return ans;
}
 
// Truyền 2 số x và y. Nếu x tốt hơn y thì trả về 0, ngược lại trả về 1.
int good(int x, int y)
{
    if (sum_digit(x) == sum_digit(y))
    {
        if (x < y)
            return 0;
        else 
            return 1;
    }
    else 
    {
        if (sum_digit(x) < sum_digit(y))
            return 1;
        else 
            return 0;
    }
}

main()
{
    int n;
    cin >> n;
    
    int res = 0;
    for (int i = 1; i * i <= n; ++i)
        if (n % i == 0)
        {
            if (good(res, i) == 1)
                res = i;
            
            int j = n / i;
            if (j != i && good(res, j) == 1)
                res = j;
        }
    
    cout << res;
}