#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MAXN = 1e5 + 5;

int n, a[MAXN];

namespace SUB1{
    void solve(){
        int ans = 0;
        for (int i = 1; i <= n; i++){
            for (int j = i; j <= n; j++){
                if ((a[i] + a[j]) & 1){
                    ans += a[i] + a[j];
                }
            }
        }
        cout << ans << endl;
    }
}
void PROGRAM(int _)
{
    cin >> n;

    int sumOdd = 0, sumEven = 0;
    int slOdd = 0, slEven = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        if (a[i] & 1) 
            sumOdd += a[i], slOdd++;
        else 
            sumEven += a[i], slEven++;
    }
    
    cout << sumOdd * slEven + sumEven * slOdd << endl;
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