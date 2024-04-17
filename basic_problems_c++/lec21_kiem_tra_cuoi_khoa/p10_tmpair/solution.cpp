#include <bits/stdc++.h>
#define int long long

using namespace std;

int N;
set < pair < int, int > > team_pairs;

void solution(int N)
{
    for (int i = 1; i * i <= N; ++i)
        if (N % i == 0)
        {
            int a1 = i, b1 = (N / i - 1) * a1;
            int a2 = (N / i), b2 = (i - 1) * a2;

            if (a1 != 0 && b1 != 0)
            {
                team_pairs.insert({a1, b1});
                team_pairs.insert({b1, a1});
            }
            if (a2 != 0 && b2 != 0)
            {
                team_pairs.insert({a2, b2});
                team_pairs.insert({b2, a2});
            }
        }

    cout << team_pairs.size();
}

main()
{
    int N;
    cin >> N;

    solution(N);

    return 0;
}