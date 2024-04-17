#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e3 + 10;
int N;
double d, v[maxn];

void enter()
{
    cin >> N >> d;
    for (int i = 1; i <= N; ++i)
    {
        cin >> v[i];
        v[i] = d / v[i] + i - 1;
    }
}

void solution()
{
    int res = 0;

    for (int i = 2; i <= N; ++i)
        for (int j = 1; j < i; ++j)
            if (v[i] < v[j])
                ++res;

    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}