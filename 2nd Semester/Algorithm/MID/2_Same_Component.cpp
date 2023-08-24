#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

vector<pii> path = { {1,0},{-1,0},{0,1},{0,-1} };
const int N = 1e3 + 5;
char arr[N][N];
int visited[N][N];
int n, m;
bool found = false;


bool isValid(int si, int sj) {
    return si >= 0 && si < n && sj >= 0 && sj < m && arr[si][sj] == '.';
}


void dfs(int si, int sj, int di, int dj) {
    visited[si][sj] = true;
    if (si == di && sj == dj) {
        found = true;
        return;
    }

    for (auto p : path) {
        int pi = p.first + si;
        int pj = p.second + sj;

        if (isValid(pi, pj) && !visited[pi][pj]) dfs(pi, pj, di, dj);
    }
}

int main() {

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    dfs(si, sj, di, dj);

    if (found) cout << "YES";
    else cout << "NO";

    return 0;
}