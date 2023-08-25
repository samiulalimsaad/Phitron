#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

const int N = 100;
int arr[N][N];
int n, m;
vector<pii> path = { {1,2}, {1,-2}, {-1,2}, {-1,-2}, {2,1}, {2,-1}, {-2,1}, {-2,-1} };

bool isValid(int pi, int pj) {
    return pi >= 0 && pi < n && pj >= 0 && pj < m;
}

void bfs(int si, int sj, int qi, int qj) {
    queue<pii> q;
    q.push({ si,sj });
    arr[si][sj] = 0;

    while (!q.empty()) {
        pii parent = q.front();
        int pi = parent.first;
        int pj = parent.second;
        q.pop();

        if (pi == qi && pj == qj) return;

        for (pii p : path) {
            int di = pi + p.first;
            int dj = pj + p.second;

            if (isValid(di, dj) && arr[di][dj] == -1) {
                q.push({ di,dj });
                arr[di][dj] = arr[pi][pj] + 1;
            }
        }
    }
}

void reset() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = -1;
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

        cout << arr[qi][qj] << endl;
    }

    return 0;
}
