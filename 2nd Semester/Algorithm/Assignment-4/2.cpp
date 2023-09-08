#include <bits/stdc++.h>
using namespace std;

bool canReach(int n) {
    vector<bool> possible(n + 1, false);
    possible[1] = true;

    for (int i = 1; i <= n; i++) {
        if (possible[i]) {
            if (i + 3 <= n) possible[i + 3] = true;
            if (i * 2 <= n) possible[i * 2] = true;
        }
    }

    return possible[n];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n; cin >> n;
        bool result = canReach(n);

        if (result) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
