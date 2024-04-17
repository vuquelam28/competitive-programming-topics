#include<bits/stdc++.h>
using namespace std;
int m,n;
const int N = 305;
vector<int> a[N],adj[N];
int lang[N][N];
int vis[N][N];
int c[N][N];
int d[N],best[N];
int res[N][N];
struct value {
	int x,y;
	bool operator <  (const value &o) const {
		return y > o.y;
	}
};
void dijkstra (int st) {
	memset (d,0x3f3f3f,sizeof(d));
	memset (best,0x3f3f3f,sizeof(best));
	priority_queue<value> pq;
	d[st] = a[st].size();
	pq.push({st,d[st]});
	while (pq.size()) {
		value fr = pq.top();
		int u = fr.x;
		int du = fr.y;
		pq.pop();
		if (du != d[u]) continue;
		for (int i=0; i<adj[u].size(); i++) {
			int v = adj[u][i];
			int w = c[u][v];
			if (d[v] > d[u] + w) {
				d[v] = d[u] + w;
				pq.push({v,d[v]});
			}
		}
	}
	for (int i=1; i<=n; i++) {
		for (int j=0; j<a[i].size(); j++) {
			int v = a[i][j];
			best[v] = min (best[v],d[i]);
		}
	}
	for (int j=0; j<a[st].size(); j++) {
		int v = a[st][j];
		for (int i=1; i<=m; i++) {
			res[v][i] = min (res[v][i],best[i]);
		}
	}
}
int check[N][N];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> m >> n;
	for (int i=1; i<=m ;i++) {
		int k; cin >> k;
		for (int j=1; j<=k; j++) {
			cin >> lang[i][j];
			a[lang[i][j]].push_back(i);
			vis[lang[i][j]][i] = 1;
		}
		for (int j=1; j<=k; j++	) {
			for (int c = j+1; c<=k; c++) {
				if (check[lang[i][j]][lang[i][c]]) continue;
				adj[lang[i][j]].push_back(lang[i][c]);
				adj[lang[i][c]].push_back(lang[i][j]);
				check[lang[i][j]][lang[i][c]] = 1;
			}
		}
	}
	for (int i=1; i<=n ;i++) {
		for (int j=1; j<=n; j++) {
			for (int cc = 0; cc < a[j].size(); cc++) {
				int v = a[j][cc];
				c[i][j]+= (!vis[i][v]); 
			}
		}
	}
	memset (res,0x3f3f3f,sizeof(res));
	for (int i=1; i<=n; i++) dijkstra(i);
	for (int i=1; i<=m; i++) {
		for (int j=1; j<=m ;j++) {
			if (i == j) res[i][j] = 0;
			if (res[i][j] == 1061109567) res[i][j] = -1;
			cout << res[i][j] << ' ';
		}
		cout << '\n';
	}
}
