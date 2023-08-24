#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> arr[N];
bool visited[N];

void dfs(int s) {
    visited[s] = true;
    for (int c : arr[s]) if (!visited[c]) dfs(c);
}


int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    vector<int> c;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
            c.push_back(i);
        }
    }

    for (auto i : c) cout << i << " ";

    return 0;
}