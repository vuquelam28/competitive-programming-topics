#include <bits/stdc++.h>
 
using namespace std;
 
const int maxN = 100005;
const int maxX = 105;
 
int n, q, a[maxN], prefSum[maxN], nxtFit[maxN][maxX];
 
int main() {
    scanf("%d%d", &n, &q);
    for(int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
 
    for(int i = 1; i <= n; ++i)
        prefSum[i] = prefSum[i-1]+a[i];
 
    for(int x = 0; x < maxX; ++x)
        nxtFit[n+1][x] = n+1;
    for(int i = n; i >= 1; --i) {
        for(int x = 0; x < maxX; ++x) {
            if (x < a[i]) nxtFit[i][x] = nxtFit[i+1][x];
            else nxtFit[i][x] = i;
        }
    }
 
    for(int iq = 0; iq < q; ++iq) {
        int x, p;
        scanf("%d%d", &x, &p);
 
        int lo = p, hi = n, curPos = p-1;
        while (lo <= hi) {
            int mid = (lo+hi)/2;
            if (prefSum[mid]-prefSum[p-1] <= x) {
                curPos = mid;
                lo = mid+1;
            } else hi = mid-1;
        }
 
        int ans = curPos-p+1;
        x -= prefSum[curPos]-prefSum[p-1];
 
        while (curPos < n) {
            curPos = nxtFit[curPos+1][x];
            if (curPos > n)
                break;
            x -= a[curPos];
            ++ans;
        }
 
        printf("%d\n", ans);
    }
}