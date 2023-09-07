#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int u, v;
    long long w;
    Edge(int u, int v, long long w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main() {
    int n, e;
    cin >> n >> e;
    vector<Edge> v;
    while (e--) {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }

    long long dis[n + 1];
    for (int i = 1; i <= n; i++) dis[i] = LONG_LONG_MAX;

    int s; cin >> s;
    dis[s] = 0;

    for (int i = 1; i < n; i++) {
        for (Edge ed : v) {
            int a = ed.u, b = ed.v;
            long long w = ed.w;
            if (dis[a] != LONG_LONG_MAX && dis[a] + w < dis[b])
                dis[b] = dis[a] + w;
        }
    }

    bool cycle = false;
    for (Edge ed : v) {
        int a = ed.u, b = ed.v;
        long long w = ed.w;
        if (dis[a] != LONG_LONG_MAX && dis[a] + w < dis[b]) {
            cycle = true;
            break;
        }
    }

    if (cycle) {
        cout << "Negative Cycle Detected" << endl;
    }
    else {
        int t; cin >> t;

        while (t--) {
            int d; cin >> d;

            if (dis[d] == LONG_LONG_MAX) cout << "Not Possible" << endl;
            else cout << dis[d] << endl;
        }
    }

    return 0;
}
