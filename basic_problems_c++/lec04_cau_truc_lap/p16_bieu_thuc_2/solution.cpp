#include <bits/stdc++.h> // Khai báo luôn các thư viện cho ngắn gọn.

using namespace std;

int main()
{
    int n;
    cin >> n;

    double res = 0;
    for (int i = 1; i <= n; ++i)
    {
        double denominator = i * (i + 1) / 2.0;
        res += 1.0 / denominator;
    }

    cout << fixed << setprecision(2) << res;

    return 0;
}


