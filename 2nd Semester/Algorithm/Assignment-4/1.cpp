#include <bits/stdc++.h>
using namespace std;
const int N = 1005;

class Knapsack {
public:
    int value;
    int weight;
};

vector<Knapsack> items(N);

int knapsack(int n, int w) {
    vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= w; j++) {
            int exclude = dp[i - 1][j];
            if (items[i - 1].weight <= j) {
                int value = items[i - 1].value;
                int weight = items[i - 1].weight;
                int diff = j - weight;
                int include = value + dp[i - 1][diff];
                dp[i][j] = max(include, exclude);
            }
            else dp[i][j] = exclude;
        }
    }

    return dp[n][w];
}

int main() {
    int t; cin >> t;

    while (t--) {
        int n, w; cin >> n >> w;

        for (int i = 0; i < n; i++) cin >> items[i].weight;
        for (int i = 0; i < n; i++) cin >> items[i].value;

        int result = knapsack(n, w);
        cout << result << endl;
    }

    return 0;
}
