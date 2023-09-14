#include <bits/stdc++.h>
using namespace std;

int min_time(string str) {
    int n = str.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int l = 2; l <= n; l++) {
        for (int i = 0; i <= n - l; i++) {
            int j = i + l - 1;
            if (str[i] == str[j]) dp[i][j] = dp[i + 1][j - 1];
            else dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
        }
    }

    return dp[0][n - 1];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;
        int result = min_time(str);
        cout << result << endl;
    }

    return 0;
}
