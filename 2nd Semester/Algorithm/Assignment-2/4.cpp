#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<long int> adj[N];
bool visited[N];

int dfs(int u, int l = 0) {
    visited[u] = true;

    for (int v : adj[u]) {
        if (visited[v]) continue;
        l = dfs(v, l + 1);
    }
    return l;
}


int main() {

    int n, m;
    cin >> n >> m;

    for (int i = 0;i < m;i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    int q;
    cin >> q;

    int len = dfs(q);

    cout << len << endl;

    return 0;

}