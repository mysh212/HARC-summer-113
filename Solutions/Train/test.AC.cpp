#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
const ll INF = 1e16;

struct Edge {
    ll v, t, k; 
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<vector<Edge>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        ll u, v, t, k;
        cin >> u >> v >> t >> k;
        adj[u].push_back({v, t, k});
        adj[v].push_back({u, t, k});
    }

    priority_queue<pll, vector<pll>, greater<pll>> pq;
    pq.push({0, x});
    vector<ll> dist(n + 1, INF);
    dist[x] = 0;
    while (!pq.empty()) {
        auto [rt, u] = pq.top();
        pq.pop();
        if (dist[u] < rt) {
            continue;
        }
        for (const auto &[v, t, k]: adj[u]) {
            if (dist[v] > dist[u] + t + (k - rt % k) % k) {
                dist[v] = dist[u] + t + (k - rt % k) % k;
                pq.push({dist[v], v});
            }
        }
    }
    cout << (dist[y] == INF ? -1 : dist[y]) << '\n';
}