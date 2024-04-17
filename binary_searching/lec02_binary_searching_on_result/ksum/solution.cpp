#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
const int N = 1e5+5;
int a[N];
int b[N];
bool check (int mid ){
    int lef = k;
    for (int i=1; i<=n; i++) {
        int x = upper_bound(b+1,b+n+1,mid - a[i]) - b - 1;
        lef -= x;
    }
    if (lef <= 0) return 1;
    else return 0;
}
signed main(){
   cin >> n >> k;
   for (int i=1; i<=n; i++) cin >> a[i];
   for (int i=1; i<=n; i++) cin >> b[i];
   sort (a+1,a+n+1);
   sort (b+1,b+n+1);
   int  l =1, r = 1e10;
    int ans = 0;
    while (r >= l){
        int mid = (r+l)/2;
        if (check(mid)) ans = mid, r = mid-1;
        else l = mid+1;
    }
    cout << ans;

    return 0;
}