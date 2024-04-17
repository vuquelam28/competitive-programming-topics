#include <bits/stdc++.h>
#define int long long

using namespace std;

void solution(int M, int N)
{
    (M == N) ? cout << M << endl : cout << 1 << endl;
}

main()
{
    int ntest;
    cin >> ntest;

    while (ntest--)
    {
        int M, N;
        cin >> M >> N;

        solution(M, N);
    }

    return 0;
}