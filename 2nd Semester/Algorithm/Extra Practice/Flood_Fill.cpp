#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

const int N = 1e3 + 5;
vector<pii> path = { {-1,0},{1,0},{0,-1},{0,1} };
int n, m;
char arr[N][N];
bool visited[N][N];
int dis[N][N];



bool isValid(int ci, int cj) {
    return ci >= 0 && ci < n && cj >= 0 && cj < m && arr[ci][cj] == '.';
}

void dfs(int si, int sj) {
    visited[si][sj] = true;

    for (pii p : path) {
        int ci = si + p.first;
        int cj = sj + p.second;

        if (isValid(ci, cj) && !visited[ci][cj]) dfs(ci, cj);

    }
}



int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    int c = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && arr[i][j] == '.') {
                c++;
                dfs(i, j);
            }
        }
    }

    cout << c << endl;
    return 0;
}