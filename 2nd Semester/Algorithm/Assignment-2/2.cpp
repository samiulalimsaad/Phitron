#include<bits/stdc++.h>
using namespace std;

const long N = 1e5 + 5;
vector<long> adj[N];
bool visited[N];

bool dfs(long u, long target, long l = 0) {
    visited[u] = true;
    bool found = false;

    if (l == target) {
        cout << u << " ";
        return true;
    }
    for (long v : adj[u]) {
        if (visited[v]) continue;
        found = found | dfs(v, target, l + 1);
    }
    return found;
}

int main() {

    long n, m, target;
    cin >> n >> m;

    for (long i = 0;i < m;i++) {
        long u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin >> target;

    bool found = dfs(target, target);

    if (!found) cout << -1 << " ";

    return 0;

}