#include <bits/stdc++.h>

using namespace std;

#define int long long

void File(){
	freopen("TG.inp", "r", stdin);
	freopen("TG.out", "w", stdout);
}

int n, m, k;
const int Sz = 500 + 2;
const int N = 502;
vector <pair <int, int> > g[Sz + 1];
int imp[Sz + 1];

namespace sub1{
	struct Edge{
		int u, v, c;

		bool operator < (const Edge &Other){
			return c < Other.c;
		}
	};

	struct DSU{
		vector <int> par;
		vector <int> sz;

		void init(int N){
			par.clear();
			sz.clear();
			for(int i = 0; i <= N; i++) par.push_back(i);
			for(int i = 0; i <= N; i++) sz.push_back(1);
		}

		int find_set(int u){
			return (u == par[u] ? u : par[u] = find_set(par[u]));
		}

		bool join_sets(int A, int B){
			A = find_set(A);
			B = find_set(B);

			if(A == B) return true;
			if(sz[A] < sz[B]) swap(A, B);
			par[B] = A;
			sz[A] += sz[B];
			return false;
		}
		//join_sets: true if already joint
	};

	void solve(){
		Edge tmp;
		vector <Edge> Edges;

		for(int i = 1, x, y, w; i <= m; i++){
			cin >> x >> y >> w;
			tmp.u = x;
			tmp.v = y;
			tmp.c = w;
			Edges.push_back(tmp);
			tmp.u = y;
			tmp.v = x;
			Edges.push_back(tmp);
		}
		sort(Edges.begin(), Edges.end());

		DSU dsu;

		dsu.init(n);

		int res = 0;

		for(int i = 0; i < (int)Edges.size(); i++){
			tmp = Edges[i];
			if(!dsu.join_sets(tmp.u, tmp.v)){
				res += tmp.c;
			}
		}
		cout << res;
	}
}

long long d[1 << 11][N]; //[2^k][edge count]
const long long inf = LLONG_MAX / 3;
bool vis[N];

long long MST() {
  for(int i = 0; i < (1 << k); i++) fill(d[i], d[i] + N, inf);
  for(int i = 0; i < k; ++i) {
    d[1 << i][imp[i]] = 0;
  }
  priority_queue<pair<long long, int>> q;
  for(int mask = 1; mask < (1 << k); ++mask) {
    for(int a = 0; a < mask; ++a) { //you can still fasten this loop to get exact 3^k complexity
      if((a | mask) != mask) continue; //we only need the subsets
      int b = mask ^ a;
      if(b > a) continue;
      for(int v = 0; v < n; ++v) {
        d[mask][v] = min(d[mask][v], d[a][v] + d[b][v]);
      }
    }
    memset(vis, 0, sizeof vis);
    for(int v = 0; v < n; ++v) {
      if(d[mask][v] == inf) continue;
      q.emplace(-d[mask][v], v);
    }

    while(!q.empty()) {
      long long cost = -q.top().first;
      int v = q.top().second;
      q.pop();
      if(vis[v]) continue;
      vis[v] = true;
      for(auto edge : g[v]) {
        long long ec = cost + edge.second;
        if(ec < d[mask][edge.first]) {
          d[mask][edge.first] = ec;
          q.emplace(-ec, edge.first);
        }
      }
    }
  }

  long long res = inf;
  for(int v = 0; v < n; ++v) {
    res = min(res, d[(1 << k) - 1][v]);
  }
  return res;
}

signed main(){
	File();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m >> k;
	for(int i = 0; i < k; i++){
        cin >> imp[i];
        imp[i]--;
	}

	if(k == n){
		sub1::solve();
		return 0;
	}

  for(int i = 0; i < m; ++i) {
    int u, v;
    long long w;
    cin >> u >> v >> w;
    --u;
    --v;
    g[u].emplace_back(v, w);
    g[v].emplace_back(u, w);
  }
  cout << MST();
}
