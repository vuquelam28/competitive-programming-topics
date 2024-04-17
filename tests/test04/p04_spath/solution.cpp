#include<bits/stdc++.h>
using namespace std;
const int N = 5005;
int n,m,Q;	
const int M = 30050;
struct qr {
	int x,y,u,v,id;
};
int a[8][N];
int res[M];
struct vcl {
	int u,v,val;
	bool operator < (const vcl &o) const {
		return val > o.val;
	}
};
int mx[] = {0,1,-1,0};
int my[] = {1,0,0,-1};
int f[8][N];
const int inf = 2e9;
bool valid (int x, int y, int l, int r) {
	return (x >= 1 && x <= n && y >= l && y <= r);
}
void dijkstra (int l, int r, int st, int mid) {
	priority_queue<vcl> pq;
	pq.push({st,mid,0});
	for (int i=1; i<=n; i++) {
		for (int j=l; j<=r; j++) f[i][j] = inf;
	}
	f[st][mid] = 0;
	while (pq.size()) {
		vcl dak = pq.top();
		pq.pop();
		int u = dak.u, v = dak.v, val = dak.val;
		if (val > f[u][v]) continue;
		for (int i=0; i<4; i++) {
			int x = u + mx[i];
			int y = v + my[i];
			if (!valid(x,y,l,r)) continue;
			if (f[x][y] > f[u][v] + a[x][y]) {
				f[x][y] = f[u][v] + a[x][y];
				pq.push({x,y,f[x][y]});
			}
		}
	}
}
void solve (vector<qr> s, int l, int r) {
	if (s.size() == 0 || (l > r)) return;
	int mid = (r+l) >> 1;
	for (int i=1; i<=n; i++) {
		dijkstra (l,r,i,mid);
		for (qr dak : s) {
			int x = dak.x, y = dak.y, u = dak.u, v = dak.v;
			int id = dak.id;
			res[id] = min (res[id],f[x][y]+f[u][v]+a[i][mid]);
		}
	}
	vector<qr> lef,rig;
	for (qr dak : s) {
		int x = dak.x, y = dak.y, u = dak.u, v = dak.v;
		int id = dak.id;
		if (max(y,v) < mid) lef.push_back(dak);
		if (min(y,v) > mid) rig.push_back(dak);
	}
	solve (lef,l,mid-1);
	solve (rig,mid+1,r);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) cin >> a[i][j];
	}
	vector<qr> s;
	cin >> Q;
	for (int i=1; i<=Q; i++) {
		int x,y,u,v; cin >> x >> y >> u >> v;
		s.push_back({x,y,u,v,i});
		res[i] = 2e9;
	}
	solve (s,1,m);
	for (int i=1; i<=Q; i++){
		cout << res[i] << '\n';
	}
}