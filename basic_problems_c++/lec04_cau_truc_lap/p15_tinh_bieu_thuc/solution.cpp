#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, N;
    cin >> x >> N;

    int index = 1;
    long long power = x, factorial = 1;
    double res = (double) power / factorial;
    for (long long i = 3; i <= N; i += 2)
    {
        ++index; // Xác định bước này đang tính đến số hạng thứ mấy của dãy.

        power = power * x * x; // Tính tử số x^i ở bước này.
        factorial = factorial * i * (i - 1); // Tính mẫu số i! ở bước này.

	    // Gộp số hạng vào biểu thức dựa vào vị trí của nó.
        if (index % 2 == 1)
            res += (double) power / (double) factorial;
        else
            res -= (double) power / (double) factorial;
    }

    cout << fixed << setprecision(2) << res;

    return 0;
}