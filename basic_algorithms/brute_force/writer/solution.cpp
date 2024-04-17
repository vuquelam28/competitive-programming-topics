#include <bits/stdc++.h>
#define task "Writer."
#define inf 1e9 + 7

using namespace std;
const int maxn = 300;
pair < int, int > key[maxn];
int ntest;
string s;

void create()
{
    key[(int)'.'] = {1, 1}; key[(int)','] = {1, 2}; key[(int)'?'] = {1, 3}; key[(int)'!'] = {1, 4}; key[49] = {1, 5};
    key[97] = {2, 1}; key[98] = {2, 2}; key[99] = {2, 3}; key[50] = {2, 4};
    key[100] = {3, 1}; key[101] = {3, 2}; key[102] = {3, 3}; key[51] = {3, 4};
    key[103] = {4, 1}; key[104] = {4, 2}; key[105] = {4, 3}; key[52] = {4, 4};
    key[106] = {5, 1}; key[107] = {5, 2}; key[108] = {5, 3}; key[53] = {5, 4};
    key[109] = {6, 1}; key[110] = {6, 2}; key[111] = {6, 3}; key[54] = {6, 4};
    key[112] = {7, 1}; key[113] = {7, 2}; key[114] = {7, 3}; key[115] = {7, 4}; key[55] = {7, 5};
    key[116] = {8, 1}; key[117] = {8, 2}; key[118] = {8, 3}; key[56] = {8, 4};
    key[119] = {9, 1}; key[120] = {9, 2}; key[121] = {9, 3}; key[122] = {9, 4}; key[57] = {9, 5};
    key[(int)'_'] = {0, 1}; key[48] = {0, 2};
}

void solve()
{
    int currentpos = 1, time = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        int t = (int)s[i], pos = key[t].first;
        time = time + (pos != currentpos) + key[t].second;
        currentpos = pos;
    }
    cout << time << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    create();
    cin >> ntest;
    while (ntest--)
    {
        cin >> s;
        solve();
    }
    return 0;
}


