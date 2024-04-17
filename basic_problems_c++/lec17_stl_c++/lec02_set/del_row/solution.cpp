#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxN = 5001;
string A[maxN], uniqueString[maxN];
int M, N;

void Enter()
{
    cin >> M >> N;
    for (int i = 1; i <= M; ++i)
        cin >> A[i];
}

void Solution()
{
    int keepedRow = 0;

    for (int i = M; i >= 1; --i)
    {
        unordered_set < string > listS;

        for (int j = 0; j < A[i].size(); ++j)
        {
            uniqueString[j] += A[i][j];
            listS.insert(uniqueString[j]);
        }

        if (listS.size() == N)
        {
            cout << M - keepedRow - 1;
            break;
        }
        else
            ++keepedRow;
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Enter();
    Solution();

    return 0;
}