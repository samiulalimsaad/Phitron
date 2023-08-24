#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> arr[N];
bool visited[N];

void dfs(int s) {
    visited[s] = true;
    for (int child : arr[s]) if (!visited[child]) dfs(child);
}

int main() {
    int n, e; cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    };

    int comp = 0;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            comp++;
            dfs(i);
        }
    }

    cout << "Node " << comp << endl;


    return 0;
}