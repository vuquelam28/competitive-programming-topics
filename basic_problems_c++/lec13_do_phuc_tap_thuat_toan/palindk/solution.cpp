#include <bits/stdc++.h>
#define int long long
#define ii pair<int, int>
#define st first
#define nd second
#define endl "\n"
#define all(v) v.begin(), v.end()
#define Unique(v) v.erase(unique(all(v)), v.end())

using namespace std;

void PROGRAM(int _){
    string s;
    int k;
    cin >> s >> k;

    string t = s;
    reverse(all(s));
    if (t == s) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int test = 1;
    cin >> test;

    for (int _ = 1; _ <= test; _++){
        PROGRAM(_);
    }

    return 0;
}