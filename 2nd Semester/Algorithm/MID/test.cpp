#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

const int N = 1000;
int visited[N][N];
int dis[N][N];
int n, m;
vector<pii> path = { {2,1}, {2,-1}, {-2,1}, {-2,-1}, {1,2}, {1,-2}, {-1,2}, {-1,-2} };

bool isValid(int pi, int pj) {
    return pi >= 0 && pi <= n && pj >= 0 && pj <= m;
}

void bfs(int si, int sj, int qi, int qj) {
    queue<pii> q;
    q.push({ si,sj });
    visited[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty()) {
        pii parent = q.front();
        int pi = parent.first;
        int pj = parent.second;
        q.pop();

        if (pi == qi && pj == qj) return;

        for (pii p : path) {
            int ci = pi + p.first;
            int cj = pj + p.second;

            if (isValid(ci, cj) && !visited[ci][cj]) {
                dis[ci][cj] = dis[pi][pj] + 1;
                visited[ci][cj] = true;
                q.push({ ci,cj });
            }
        }
    }
}

void reset() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            dis[i][j] = -1;
            visited[i][j] = false;
        }
    }
}

int main() {
    int t;

    cin >> t;

    while (t--) {
        reset();
        int ki, kj, qi, qj;
        cin >> n >> m >> ki >> kj >> qi >> qj;

        bfs(ki, kj, qi, qj);

        if (n <= 2 || m <= 2 || !visited[qi][qj]) cout << -1 << endl;
        else cout << dis[qi][qj] << endl;
    }

    return 0;

}