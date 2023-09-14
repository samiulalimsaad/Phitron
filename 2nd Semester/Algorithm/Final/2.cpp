#include <bits/stdc++.h>
using namespace std;

int min_mark_count(int arr[], int n, int t) {
    int dp[t + 1];
    dp[0] = 0;

    for (int i = 1; i <= t; i++) dp[i] = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = arr[i]; j <= t; j++) {
            if (dp[j - arr[i]] != INT_MAX) dp[j] = min(dp[j], dp[j - arr[i]] + 1);
        }
    }

    if (dp[t] == INT_MAX) return -1;
    return dp[t];
}

int main() {
    int t; cin >> t;
    int target = 1000;

    while (t--) {
        int n, m; cin >> n >> m;

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << min_mark_count(arr, n, target - m) << endl;

    }

    return 0;
}
