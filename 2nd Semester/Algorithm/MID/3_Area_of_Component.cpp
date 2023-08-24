#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

vector<pii> path = { {1,0},{-1,0},{0,1},{0,-1} };
const int N = 1e3 + 5;
char arr[N][N];
int visited[N][N];
int n, m;


bool isValid(int si, int sj) {
    return si >= 0 && si < n && sj >= 0 && sj < m && arr[si][sj] == '.';
}


void dfs(int si, int sj, int& comp) {
    visited[si][sj] = true;
    ++comp;

    for (auto p : path) {
        int pi = p.first + si;
        int pj = p.second + sj;

        if (isValid(pi, pj) && !visited[pi][pj]) dfs(pi, pj, comp);
    }
}

int main() {

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int c = 0, min = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && arr[i][j] == '.') {
                dfs(i, j, c);
                if (c < min)  min = c;
                c = 0;
            }
        }
    }

    if (min == INT_MAX) cout << -1 << endl;
    else cout << min << endl;

    return 0;
}