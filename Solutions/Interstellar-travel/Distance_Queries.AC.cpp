#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n, q;
    cin >> n >> q;
 
    vector<vector<int>> tree(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
 
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
 
    int log = log2(n);
    vector<vector<int>> dp(n + 1, vector<int>(log + 1));
    vector<int> depth(n + 1);
    
    auto dfs = [&](auto self, int cur, int pre) -> void {
        depth[cur] = depth[pre] + 1;
        dp[cur][0] = pre;
        for (int j = 1; j <= log && dp[cur][j - 1]; j++) {
            dp[cur][j] = dp[dp[cur][j - 1]][j - 1];
        }
 
        for (int &nxt: tree[cur]) {
            if (nxt != pre) {
                self(self, nxt, cur);
            }
        }
    };
    dfs(dfs, 1, 0);

    while (q--) {
        int a, b;
        cin >> a >> b;

        int res = depth[a] + depth[b];
        if (depth[a] < depth[b]) {
            swap(a, b);
        }
 
        for (int j = log; depth[a] > depth[b]; j--) {
            if (depth[dp[a][j]] >= depth[b]) {
                a = dp[a][j];
            }
        }
 
        if (a == b) {
            cout << res - depth[a] * 2 << '\n';
            continue;
        }

        for (int j = log; dp[a][0] != dp[b][0]; j--) {
            if (dp[a][j] != dp[b][j]) {
                a = dp[a][j];
                b = dp[b][j];
            }
        }
        cout << res - depth[dp[a][0]] * 2 << '\n';
    }
}