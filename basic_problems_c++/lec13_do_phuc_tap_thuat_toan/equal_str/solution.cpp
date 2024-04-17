/*
Tag: 
*/
#include <bits/stdc++.h>
#define int long long
#define ii pair<int, int>
#define st first
#define nd second
#define endl "\n"
#define all(v) v.begin(), v.end()
#define Unique(v) v.erase(unique(all(v)), v.end())

using namespace std;

string s;
int n;

namespace SUB1{
    void solve(){
        int res = 0;
        for (int i = 1; i <= n; i++){
            for (int j = i + 1; j <= n; j++){
                for (int len = 1; j + len - 1 <= n; len++){
                    if (s.substr(i, len) == s.substr(j, len)) res++;
                }
            }
        }
        cout << res << endl;
    }
}
void PROGRAM(int _){
    cin >> s;
    n = s.size();
    s = '+' + s;

    int res = 0;
    for (int i = 1; i <= n; i++){
        for (int j = i + 1; j <= n; j++){
            for (int t = 1; j + t - 1 <= n; t++){
                if (s[i + t - 1] != s[j + t - 1]) 
                    break;
                
                res++;
            }
        }
    }
    cout << res << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int test = 1;


    for (int _ = 1; _ <= test; _++){
        PROGRAM(_);
    }

    return 0;
}