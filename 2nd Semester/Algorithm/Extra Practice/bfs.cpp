#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> arr[N];
int dis[N];
bool visited[N];

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    dis[s] = 0;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();
        cout << "Parent => " << parent << endl;

        for (int child : arr[parent]) {
            if (!visited[child]) {
                q.push(child);
                dis[child] = dis[parent] + 1;
                visited[child] = true;
            }
        }
    }
}

int main() {
    int n, e; cin >> n >> e;


    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    };

    bfs(1);

    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": " << dis[i] << endl;
    }


    return 0;
}