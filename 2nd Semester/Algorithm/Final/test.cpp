#include <bits/stdc++.h>
using namespace std;


const int MOD = 1e9 + 7;

int is_possible(int arr[], int n, int t) {
    int dp[t + 1];

    for (int i = 1; i <= t; i++) dp[i] = 0;
    dp[0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = arr[i]; j <= t; j++) {
            dp[j] = (dp[j] + dp[j - arr[i]]) % MOD;
        }
    }

    return dp[t];
}

int main() {
    int t; cin >> t;
    int target = 1000;

    while (t--) {
        int n, m; cin >> n >> m;

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << is_possible(arr, n, target - m) << endl;
    }

    return 0;
}
