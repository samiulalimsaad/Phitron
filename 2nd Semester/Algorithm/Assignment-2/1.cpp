#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<long int> adj[N];
bool visited[N];
int level[N];

void bfs(long int s) {
    queue<long int> q;
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

void fill_level() {
    for (int i = 0; i < N; i++) {
        level[i] = -1;
    }
}

void fill_visited() {
    for (int i = 0; i < N; i++) {
        visited[i] = false;
    }
}

int main() {
    fill_level();

    int n, m;
    cin >> n >> m;

    for (int i = 0;i < m;i++) {
        long int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    int q;
    cin >> q;

    while (q--) {
        int s, d;
        cin >> s >> d;
        bfs(s);

        cout << level[d] << endl;

        fill_level();
        fill_visited();
    }

    return 0;

}