#include <bits/stdc++.h>
#define int long long

using namespace std;

void solution(int A, int B)
{
    int A1 = A, B1 = B;
    if (A1 % 2 == 0)
        ++A1;
    if (B1 % 2 == 0)
        --B1;

    cout << (A1 + B1) * ((B1 - A1) / 2LL + 1LL) / 2LL << endl;
    cout << A / __gcd(A, B) << ' ' << B / __gcd(A, B);
}

main()
{
    int A, B;
    cin >> A >> B;

    solution(A, B);

    return 0;
}