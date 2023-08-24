#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

const int N = 1e5 + 5;

vector<pii> arr[N];
int dis[N];
bool visited[N];

void dijkstra(int s) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({ 0,s });
    dis[s] = 0;

    while (!pq.empty()) {
        pii parent = pq.top();
        int parentCost = parent.first;
        int parentNode = parent.second;
        pq.pop();

        if (visited[parentNode]) continue;
        visited[parentNode] = true;

        cout << "Parent => " << parentNode << endl;

        for (pii child : arr[parentNode]) {
            int childNode = child.first;
            int childCost = child.second;
            if (dis[parentNode] + childCost < dis[childNode]) {
                dis[childNode] = dis[parentNode] + childCost;
                pq.push({ dis[childNode], childNode });
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