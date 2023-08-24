#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

const int N = 1e3 + 5;
vector<pii> path = { {-1,0},{1,0},{0,-1},{0,1} };
int n, m;
bool visited[N][N];
int dis[N][N];


bool isValid(int ci, int cj) {
    return ci >= 0 && ci < n && cj >= 0 && cj < m;
}

void bfs(int si, int sj) {
    queue<pii> q;
    q.push({ si,sj });
    dis[si][sj] = 0;
    visited[si][sj] = true;

    while (!q.empty()) {
        pii parent = q.front();
        int pi = parent.first;
        int pj = parent.second;
        q.pop();

        for (pii p : path) {
            int ci = pi + p.first;
            int cj = pj + p.second;

            if (isValid(ci, cj) && !visited[ci][cj]) {
                visited[ci][cj] = true;
                q.push({ ci,cj });
                dis[ci][cj] = dis[pi][pj] + 1;
            }
        }
    }
}



int main() {
    cin >> n >> m;

    char arr[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    int si, sj;
    cin >> si >> sj;

    bfs(si, sj);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << dis[i][j] << " ";
        cout << endl;
    }

    return 0;
}