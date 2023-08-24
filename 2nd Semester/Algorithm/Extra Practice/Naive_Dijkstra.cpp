#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

const int N = 1e5 + 5;

vector<pii> arr[N];
int dis[N];

void dijkstra(int s) {
    queue<int> q;
    q.push(s);
    dis[s] = 0;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();
        cout << "Parent => " << parent << endl;

        for (pii child : arr[parent]) {
            int childNode = child.first;
            int childCost = child.second;
            if (dis[parent] + childCost < dis[childNode]) {
                dis[childNode] = dis[parent] + childCost;
                q.push(childNode);
            }
        }
    }
}

int main() {
    int n, e; cin >> n >> e;

    while (e--) {
        int a, b, w;
        cin >> a >> b >> w;
        arr[a].push_back({ b,w });
        arr[b].push_back({ a,w });
    };

    for (int i = 1; i <= n; i++) dis[i] = INT_MAX;
    // for (int i = 1; i <= n; i++) dijkstra(i);
    dijkstra(1);
    for (int i = 1; i <= n; i++) cout << "Node " << i << ": " << dis[i] << endl;

    return 0;
}