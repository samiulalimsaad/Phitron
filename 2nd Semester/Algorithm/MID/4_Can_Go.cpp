#include <bits/stdc++.h>
using namespace std;
#define pii pair<long int,long int>

const int N = 1e5 + 5;
vector<pii> arr[N];
long int visited[N];
long int dis[N];
long int n, e;

void dijkstra(int s) {
    priority_queue <pii, vector<pii>, greater<pii>> pq;

    pq.push({ 0,s });
    dis[s] = 0;

    while (!pq.empty()) {
        pii parent = pq.top();
        pq.pop();

        long int parentCost = parent.first;
        long int parentNode = parent.second;

        if (visited[parentNode]) continue;
        visited[parentNode] = true;

        for (pii child : arr[parentNode]) {
            long int childNode = child.first;
            long int childCost = child.second;
            if (parentCost + childCost < dis[childNode]) {
                dis[childNode] = parentCost + childCost;
                pq.push({ dis[childNode], childNode });
            }
        }
    }
}

int main() {

    cin >> n >> e;

    while (e--) {
        long int a, b, w;
        cin >> a >> b >> w;
        arr[a].push_back({ b,w });
    }

    for (int i = 1; i <= n; i++) {
        dis[i] = LONG_MAX;
    }

    long int s, t;
    cin >> s >> t;

    dijkstra(s);
    while (t--) {
        long int d, dw;
        cin >> d >> dw;
        if (dis[d] == LONG_MAX) cout << "NO" << endl;
        else if (dis[d] <= dw) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}