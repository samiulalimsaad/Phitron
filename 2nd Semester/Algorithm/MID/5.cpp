#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

int min_steps_to_reach_target_by_knight(pii knight_pos, pii target_pos, int n) {
    vector<int> dx = { -2, -1, 1, 2, -2, -1, 1, 2 };
    vector<int> dy = { -1, -2, -2, -1, 1, 2, 2, 1 };
    queue<pair<pii, int>> q;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    visited[knight_pos.first][knight_pos.second] = true;
    q.push({ knight_pos,0 });
    while (!q.empty()) {
        auto curr = q.front();
        q.pop();
        if (curr.first.first == target_pos.first && curr.first.second == target_pos.second) {
            return curr.second;
        }
        for (int i = 0;i < 8;i++) {
            int new_x = curr.first.first + dx[i];
            int new_y = curr.first.second + dy[i];
            if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < n && !visited[new_x][new_y]) {
                visited[new_x][new_y] = true;
                q.push({ {new_x,new_y},curr.second + 1 });
            }
        }
    }
    return -1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        pii knight_pos, target_pos;
        cin >> knight_pos.first >> knight_pos.second >> target_pos.first >> target_pos.second;
        int ans = min_steps_to_reach_target_by_knight(knight_pos, target_pos, n);
        cout << ans << endl;
    }
    return 0;
}
