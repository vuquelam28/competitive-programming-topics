#include<bits/stdc++.h>
using namespace std;
const int N = 50050;
int n,q;
int c[N];
int pos[N],dem[N];
const int S = 225;
vector<int> can;
vector<int> a[N];
int s[N][S+2];
int g[N][S+2];
int sz[N];
int f[N][18];
int lv[N];
int lca (int u, int v) {
	if (lv[u] >= lv[v]) swap (u,v);
	for (int i=17; i>=0; i--) {
		if (lv[f[v][i]] >= lv[u]) v = f[v][i];
	}
	for (int i=17; i>=0; i--){
		if (f[v][i] != f[u][i]) v = f[v][i], u = f[u][i];
	}
	while (u != v) u = f[u][0], v = f[v][0];
	return u;
}
void dfs (int u, int p) {
	f[u][0] = p;
	sz[u] = 1;
	if (dem[c[u]] >= S) {
		s[u][pos[c[u]]] = 1;
		g[u][pos[c[u]]]++;
	}
	for (auto v : a[u]) {
		if (v == p) continue;
		lv[v] = lv[u]+1;
		for (int i=0; i<can.size(); i++) g[v][i] = g[u][i];
		dfs (v,u);
		sz[u] += sz[v];
		for (int i=0; i<can.size(); i++) s[u][i] += s[v][i];
	}
}
int cnt[N];
vector<int> cur;
int res = -1, need = 0;
int dis (int u, int v) {
	int c = lca (u,v);
	return lv[u] + lv[v] - 2*lv[c] + 1;
}
int num (int u, int v, int cha, int id) {
	int ok = 0;
	if (c[cha] == can[id]) ok = 1;
	return g[u][id] + g[v][id] - 2*g[cha][id] + ok;	
}
namespace trau {
	void dfs (int u) {
		cnt[c[u]]++;
		cur.push_back(c[u]);
		if (cnt[c[u]] >= need) {
			res = c[u];
			return;
		}
		for (auto v : a[u]) {
			if (v == f[u][0]) continue;
			dfs (v);
		}
	}
	void cal (int u, int del) {
		if (u == del) return;
		cnt[c[u]]++;
		cur.push_back(c[u]);
		if (cnt[c[u]] >= need) {
			res = c[u];
			return;
		}
		for (auto v : a[u]) {
			if (v == f[u][0]) continue;
			cal (v,del);
		}
	}
	void leo (int u, int v) {
		int cha = lca (u,v);
		while (u != cha) {
			cnt[c[u]]++;
			cur.push_back(c[u]);
			if (cnt[c[u]] >= need) {
				res = c[u];
				return;
			}
			u = f[u][0];
		} 
		while (v != cha) {
			cnt[c[v]]++;
			cur.push_back(c[v]);
			if (cnt[c[v]] >= need) {
				res = c[v];
				return;
			}
			v = f[v][0];
		}
		cnt[c[cha]]++;
		cur.push_back(c[cha]);
		if (cnt[c[cha]] >= need) res = c[cha];
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> q;
	int tt = 0;
	for (int i=1; i<=n; i++) {
		cin >> c[i];
		dem[c[i]]++;
		if (dem[c[i]] == S) {
			can.push_back(c[i]);
			pos[c[i]] = can.size(); 
			pos[c[i]]--;
		}
	}
	for (int i=1; i<n; i++) {
		int u,v; cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	dfs (1,1);
	for (int j=1; j<=17; j++) {
		for (int i=1; i<=n; i++) f[i][j] = f[f[i][j-1]][j-1];
	}
	const int inf = 1;
	while (q--) {
		tt++;
		int t,u,v;
		cin >> t >> u;
		if (t == 3) cin >> v;
		if (t == 1) {
			need = sz[u]/2 + 1;
			if (sz[u] < inf*2*S) {
				trau::dfs(u);
				for (auto v : cur) cnt[v] = 0;
 			}
 			else {
 				for (int i=0; i<can.size(); i++) {
 					if (s[u][i] >= need) {
 						res = can[i];
 						break;
					 }
				 }
			 }
		}
		else if (t == 2) {
			need = (sz[1] - sz[u])/2+1;
			if (sz[1] - sz[u] < inf*2*S) {
				trau::cal(1,u);
				for (auto v : cur) cnt[v] = 0;
			}
			else {
				for (int i=0; i<can.size(); i++) {
 					if (s[1][i] - s[u][i] >= need) {
 						res = can[i];
 						break;
					 }
				 }
			}
		}
		else {
			need = dis(u,v)/2+1;
			if (dis(u,v) < inf*2*S) {
				trau::leo(u,v);
				for (auto v : cur) cnt[v] = 0;
			}
			else {
				int c = lca (u,v);
				for (int i=0; i<can.size(); i++) {
					if (num(u,v,c,i) >= need) {
						res = can[i];
						break;
					}
				}
			}
		}
		cout << res << '\n';
		res = -1;
		cur.clear();
	}
}