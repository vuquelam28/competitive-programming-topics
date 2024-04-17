#include <bits/stdc++.h>
#define int long long
#define task "MaxPro."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
int a, b, c, M, A[25], B[25], mul[100];

void Enter()
{
    cin >> a >> b >> c >> M;
}

class Solution
{
    public:
        int a, b, c, M;

        Solution(int a, int b, int c, int M)
        {
            this -> a = a;
            this -> b = b;
            this -> c = c;
            this -> M = M;
        }

        string toString(int X) // Đổi một số nguyên sang dạng string.
        {
            string ans;

            while (X != 0)
            {
                ans = (char)(X % 10 + '0') + ans;
                X /= 10;
            }

            return ans;
        }

        string bigMultiply(string s1, string s2) // Nhân hai số lớn.
        {
            int d1 = 0, d2 = 0;
            for (int i = s1.size() - 1; i >= 0; --i)
                A[++d1] = s1[i] - '0';
            for (int i = s2.size() - 1; i >= 0; --i)
                B[++d2] = s2[i] - '0';
            // Reserve two string and add digits into two arrays
            // Multiply from the back of two big-number
            for (int i = 1; i <= d1; ++i)
                for (int j = 1; j <= d2; ++j)
                {
                    int temp = (A[i] * B[j]);
                    mul[i + j - 1] += temp; // Multiply two digits and add to position [i + j - 1] in mul;
                    mul[i + j] += (mul[i + j - 1] / 10); // Accumulate the carry digit to the next position
                    mul[i + j - 1] %= 10; // Keep the last digit in this position
                }

            string ans;
            int length = (mul[d1 + d2]) ? d1 + d2: d1 + d2 - 1; // Get the real length of string mul
            for (int i = length; i >= 1; --i)
                ans += (char)(mul[i] + '0');

            return ans;
        }

        int bigMod(string A, int B) // Lấy module số lớn cho số nhỏ.
        {
            int ans = 0;

            for (int i = 0; i < A.size(); ++i)
                 ans = (ans * 10 + (A[i] - '0')) % B;

            return ans;
        }

        void Solve()
        {
            // Sắp xếp lại 3 số a, b, c theo thứ tự tăng dần.
            if (a > b)
                swap(a, b);
            if (a > c)
                swap(a, c);
            if (b > c)
                swap(b, c);
            /*
              Chỉ có thể xảy ra 1 trong 2 trường hợp:
                + TH1: Có ít nhất 2 số âm => Lấy tích 2 số âm nhỏ nhất.
                + TH2: Có ít nhất 2 số dương => Lấy tích 2 số dương lớn nhất.
              Ở đây do M <= 10^18 nên buộc phải sử dụng nhân 2 số lớn và mod số lớn cho số nhỏ.
            */
            if (a < 0 && b < 0)
            {
                string temp = bigMultiply(toString(abs(a)), toString(abs(b)));
                cout << bigMod(temp, M);
            }
            else
            {
                string temp = bigMultiply(toString(abs(b)), toString(abs(c)));
                cout << bigMod(temp, M);
            }
        }
};

main()
{
    //freopen(task"inp", "r", stdin);
    //freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Enter();
    Solution Result(a, b, c, M);
    Result.Solve();

    return 0;
}