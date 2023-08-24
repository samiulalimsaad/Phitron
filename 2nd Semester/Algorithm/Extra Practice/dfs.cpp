#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> arr[N];
bool visited[N];

void dfs(int s) {
    visited[s] = true;

    cout << s << endl;
    for (auto child : arr[s]) {
        if (!visited[child])dfs(child);
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

    dfs(1);

    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": " << visited[i] << endl;
    }


    return 0;
}