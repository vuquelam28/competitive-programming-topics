#include <bits/stdc++.h>
#define nmax 100004
#define f first
#define s second
#define pb push_back
#define pa pair<int,int>
#define task "remain"

using namespace std;

int k;
long long n,m;

 unsigned long long Pow(long long a,int n, long long MOD)
{
    unsigned long long res;
    if(n==0) return 1;
    res=Pow(a,n/2,MOD);
    res=res%MOD*res%MOD;
    if(n%2) res=res%MOD*a%MOD;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
    cin>>n>>k>>m;
    cout<<Pow(n,k,m);

    return 0;
}
