#include <bits/stdc++.h>
#define nmax 100004
#define f first
#define s second
#define pb push_back
#define pa pair<int,int>
#define task "func"

using namespace std;

int n,a[nmax],maxx(0),b[nmax];
int f1[nmax],f2[nmax],f3[nmax];

void sub1()
{
    for(int i=1; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            for(int k=j+1; k<=n; k++)
            {
                int s=a[i]+3*a[j]+5*a[k];
                maxx=max(maxx,s);
                // cout<<maxx<<"\n";
            }
    cout<<maxx;
}

void sub3()
{
    memset(f1,0,sizeof(f1));
    memset(f2,0,sizeof(f2));
    memset(f3,0,sizeof(f3));
    f1[n+1]=-1e9;
    f2[n]=-1e9;
    f3[n-1]=-1e9;
    for(int i=n; i>2; i--)
        f1[i]=max(f1[i+1],5*a[i]);
    for(int i=n-1; i>1; i--)
        f2[i]=max(f2[i+1],3*a[i]+f1[i+1]);
    for(int i=n-2; i>=1; i--)
        f3[i]=max(f3[i+1],a[i]+f2[i+1]);
    for(int i=1; i<=n; i++) maxx=max(f3[i],maxx);
    cout<<maxx;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    if(n<=100) sub1();
    else sub3();
    return 0;
}
