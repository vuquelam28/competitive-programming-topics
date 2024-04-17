#include <bits/stdc++.h>

using namespace std;

void solution(int N)
{
    int max_div = 1;
    for (int i = 2; i <= sqrt(N); ++i)
        if (N % i == 0)
            max_div = max(max_div, max(i, N / i));

    cout << max_div << endl;

    int tmp = 0; pair < int, int > num;
    for (int x = 1; x <= N / 2; ++x)
        if (__gcd(x, N - x) > tmp)
        {
            num = make_pair(x, N - x);
            tmp = __gcd(x, N - x);
        }

    cout << num.first << ' ' << num.second << ' ' << __gcd(num.first, num.second);
}

int main()
{
    int N;
    cin >> N;

    solution(N);
    
    return 0;
}