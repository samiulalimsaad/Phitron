#include <bits/stdc++.h>
using namespace std;

bool subset_sum(int arr[], int n, int t) {
    bool dp[n + 1][t + 1];

    for (int i = 0; i <= n; i++) dp[i][0] = true;

    for (int j = 1; j <= t; j++) dp[0][j] = false;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= t; j++) {
            if (arr[i - 1] > j) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
        }
    }

    return dp[n][t];
}

int main() {
    int t; cin >> t;
    int target = 1000;

    while (t--) {
        int n, m; cin >> n >> m;

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        if (subset_sum(arr, n, target - m)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
