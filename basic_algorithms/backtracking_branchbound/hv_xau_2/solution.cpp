#include <bits/stdc++.h>
#define task "Hvxau2."
#define inf 1e9 + 7

using namespace std;
const int maxn = 11;
string s, st;
vector < char > character;
int check[maxn], n;
vector < string > res;

void enter()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
        character.push_back(s[i]);
    n = character.size() - 1;
}

void create(int i)
{
    // Luôn luôn sinh ra các xâu theo thứ tự từ điển tăng dần và khác nhau.
    // Đặt cận: Nếu xâu mới sinh ra bị nhỏ hơn hoặc bằng xâu cuối cùng đã sinh ra trong tập kết quả, 
    // thì không cần đi tiếp vào nhánh này nữa.
    if (!res.empty() && st <= res.back()) 
    {
        return;
    }
    else
    {
        for (int j = 0; j < character.size(); ++j)
            if (!check[j])
            {
                check[j] = 1;
                st += character[j];
                if (i == n)
                    res.push_back(st);
                else create(i + 1);
                check[j] = 0;
                st.erase(i, 1);
            }
    }

}

int main()
{
    enter();
    sort(character.begin(), character.end());
    create(0);
    for (int i = 0; i < res.size(); ++i)
        cout << res[i] << endl;
    return 0;
}
