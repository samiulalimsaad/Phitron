#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
vector<int> same;
bool visited[N];
int level[N];

void bfs(int s, int l) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int q;
    cin >> q;

    bfs(0, q);

    for (int i = 0; i < N; i++) {
        if (level[i] == q) {
            same.push_back(i);
        }
    }

    if (q == 0) {
        cout << 0;
        return 0;
    }
    else if (same.empty()) {
        cout << -1;
    }
    else {
        for (int i : same) {
            cout << i << " ";
        }
    }

    return 0;
}
