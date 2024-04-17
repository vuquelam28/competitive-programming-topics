#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("Os")
#pragma GCC target ("avx2")
#include <bits/stdc++.h>
#define pb push_back
#define int long long
using namespace std;

int n;
string s;
pair<int, int> res;
map<pair<int, int>, vector<pair<int, int>>> m;
map<pair<int, int>, int> d;

void nhap(){
	cin >> s;
	n = s.length();
	int u = n, v = n;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'D') {
			m[{u, v}].pb({u, v + 1});
			m[{u, v + 1}].pb({u, v});
			v++;
		} else if (s[i] == 'N') {
			m[{u, v}].pb({u - 1, v});
			m[{u - 1, v}].pb({u, v});
			u--;
		} else if (s[i] == 'T') {
			m[{u, v}].pb({u, v - 1});
			m[{u, v - 1}].pb({u, v});
			v--;
		} else {
			m[{u, v}].pb({u + 1, v});
			m[{u + 1, v}].pb({u, v});
			u++;
		}
	}
	res = {u, v};
}

void bfs(pair<int, int> x){
	queue<pair<int, int>> q;
	q.push({n, n});
	d[{n, n}] = 1;
	while (q.size() != 0){
		pair<int, int> u = q.front();
		q.pop();
		for (int i = 0; i < (int)m[u].size(); i++) {
			if (d[m[u][i]] == 0) {
				q.push(m[u][i]);
				d[m[u][i]] = d[u] + 1;
				if (m[u][i] == x) { 
					return;
				}
			}
		}
	}
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	nhap();
	bfs(res);
	cout << d[res] - 1;
}
