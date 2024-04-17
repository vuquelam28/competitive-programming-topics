#include <bits/stdc++.h>
#define task "AcceptString."
#define inf 1e9 + 7

using namespace std;
const int maxn = 130;
string s1, s2;

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> s1 >> s2;
}

void solve()
{
    int pos1 = -1, pos2 = -1, M = s1.size(), N = s2.size();
    string res;

    while (pos1 < M && pos2 < N)
    {
        bool kt = false;
        for (char c = 'z'; c >= 'a'; --c) // Tim ki tu chung giua hai xau, uu tien theo tttd giam dan
        {
            int x = -1, y = -1;
            for (int i = pos1 + 1; i < s1.size(); ++i)
                if (s1[i] == c)
                {
                    x = i;
                    break;
                }
            for (int i = pos2 + 1; i < s2.size(); ++i)
                if (s2[i] == c)
                {
                    y = i;
                    break;
                }
            if (x != -1 && y != -1) // Tim duoc vi tri s1[x] = s2[y] => di chuyen toi vi tri do tim tiep
            {
                kt = true; pos1 = x; pos2 = y;
                res += c; // Ket nap ki tu c vao xau con chung ket qua
                break;
            }
        }
        if (!kt) break; // Neu nhu khong tim duoc cap ki tu chung nao thi dung vong lap
    }

    (res.empty()) ? cout << -1 : cout << res;
}

int main()
{
    enter();
    solve();
    return 0;
}