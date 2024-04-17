#include <bits/stdc++.h>
#define int long long
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
int a, b, c;

void Enter()
{
    cin >> a >> b >> c;
}

class Solution
{
    public:
        int a, b, c;

        Solution(int a, int b, int c)
        {
            this -> a = a;
            this -> b = b;
            this -> c = c;
        }

        int GetModValue()
        {
            int res = 1;

            for (int i = a; i <= b; ++i)
                res = ((res % c) * (i % c)) % c;

            return res;
        }
};

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Enter();
    Solution Result(a, b, c);
    cout << Result.GetModValue();

    return 0;
}