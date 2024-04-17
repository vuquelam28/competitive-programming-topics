#include <bits/stdc++.h>
#define nmax 1004
#define f first
#define s second
#define pb push_back
#define pa pair<int,int>
#define task "map"

using namespace std;

int n,a[nmax][nmax],dd[nmax][nmax],color[20*nmax];
int mau(0),tplt(0),s(0),maxx(0);
int dx[4]={0,1,-1,0};
int dy[4]={-1,0,0,1};

void DFS(int x, int y)
{

    dd[x][y]=1;
    s++;
    for(int i=0;i<4;i++)
    {
        int ux=x+dx[i];
        int uy=y+dy[i];
        if(dd[ux][uy] || a[ux][uy]!=a[x][y]) continue;
        if(ux<=0 || uy<=0 || ux>n || uy>n) continue;
        DFS(ux,uy);
    }
}

void Solve()
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
    {
        if(!dd[i][j])
        {
            s=0;
            tplt++,DFS(i,j);
            maxx=max(s,maxx);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
    memset(dd,0,sizeof(dd));
    memset(color,0,sizeof(color));
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(!color[a[i][j]]) mau++;
            color[a[i][j]]++;
        }
    Solve();
    cout<<mau<<"\n"<<tplt<<"\n"<<maxx;

    return 0;
}
