#include <bits/stdc++.h>
#define int long long
#define task "FindString."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
int K;
string X;

void Enter()
{
    cin >> K;
    cin >> X;
}

class Solution
{
    public:
        int K;
        string X;

        Solution(int K, string X)
        {
            this -> K = K;
            this -> X = X;
        }
        /**
          * Hàm tạo ra các hoán vị vòng quanh khác nhau của xâu X. Gấp đôi xâu X lên và tìm đủ các hoán vị vòng quanh,
            đưa vào một vector rồi sắp xếp lại, sau đó tìm các xâu khác nhau (ở đây dùng hàm có sẵn unique). Cuối cùng
            đưa ra xâu thứ k trong dãy các xâu khác nhau tìm được, đó chính là xâu s ban đầu.
        */
        void Permutation()
        {
            int N = X.size();
            vector < string > listString;

            for (int i = 0; i < N; ++i)
            {
                X += X[i];
                listString.push_back(X.substr(i, N));
            }
            sort(listString.begin(), listString.end());
            int sizeList = unique(listString.begin(), listString.end()) - listString.begin();

            if (K > sizeList)
                cout << -1;
            else
                cout << listString[K - 1];
        }
};

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Enter();
    Solution Result(K, X);
    Result.Permutation();

    return 0;
}