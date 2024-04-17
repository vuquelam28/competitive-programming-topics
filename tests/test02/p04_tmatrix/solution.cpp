#include<bits/stdc++.h>
#define int long long
#define double long double
#define PB push_back
#define maxn 1000001
#define bit(x,i) ((x>>i)&1)
#define S second
#define F first
#define MP make_pair
#define epsilon 0.000001

using namespace std;

typedef pair<int,int> pii;
typedef pair<double,double> pdd;
const int inf = 1e18;
const int mod = 1e9+7;

int n,m,t,c[maxn];
vector<vector<int>> v;
int hx[4]={0,1,0,-1},hy[4]={1,0,-1,0};
vector<pii> g[maxn];

void readData(){
    cin>>n>>m>>t;
    for (int i=1;i<=n;i++){
        vector<int> x;
        for (int j=1;j<=m;j++){
            int c;
            cin>>c;
            x.PB(c);
        }
        v.PB(x);
    }
}

void solve(){
    int a[n+1][m+1],l[n+1][m+1];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            a[i][j]=v[i-1][j-1];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            g[a[i][j]].PB({i,j});
    int cnt=0;
    while (t--){
        cnt++;
        int sx,sy,tx,ty;
        cin>>sx>>sy>>tx>>ty;
        int mxa=n+m+3;
        for (int i=1;i<=n;i++)
            for (int j=1;j<=m;j++)
                l[i][j]=inf;
        queue<pii> q[mxa];
        q[0].push({tx,ty});
        l[tx][ty]=0;
        bool flag=false;
        for (int i=0;i<=mxa;i++){
            if (flag) break;
            while (q[i].size()){
                pii u=q[i].front();
                q[i].pop();
                int x=u.F,y=u.S;
                if (x==sx&&y==sy){
                    cout<<i<<"\n";
                    flag=true;
                    break;
                }
                for (int j=0;j<4;j++){
                    int cx=x+hx[j],cy=y+hy[j];
                    if (cx>0&&cx<=n&&cy>0&&cy<=m&&l[x][y]+1<l[cx][cy]){
                        l[cx][cy]=l[x][y]+1;
                        q[i+1].push({cx,cy});
                    }
                }
                if (c[x*y]!=cnt){
                    c[x*y]=cnt;
                    for (auto dak:g[x*y])
                        if (l[x][y]+3<l[dak.F][dak.S]){
                            q[i+3].push({dak.F,dak.S});
                            l[dak.F][dak.S]=l[x][y]+3;
                        }
                }
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    readData();
    solve();
    return 0;
}