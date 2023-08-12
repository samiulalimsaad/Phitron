#include<bits/stdc++.h>
using namespace std;

const int N = 1e4 + 5;
vector<int> adj[N];
bool visited[N];

int bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    int c = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        c++;

        for (int v : adj[u]) {
            if (visited[v]) continue;
            q.push(v);
            visited[v] = true;
        }
    }
    return c;
}

int main() {

    int n, m;
    cin >> n >> m;

    for (int i = 0;i < m;i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector <int>count;

    for (int i = 0;i < N;i++) {
        if (adj[i].empty() || visited[i]) continue;
        int c = bfs(i);
        count.push_back(c);
    }

    sort(count.begin(), count.end());

    for (int c : count) {
        if (c == 1) continue;
        cout << c << " ";
    }

    return 0;

}