#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, q;
    cin >> n >> q;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    while (q--) {
        int t;
        bool flag = false;
        cin >> t;
        auto it = lower_bound(a.begin(), a.end(), t);

        if (it != a.end() && *it == t) {
            cout << "found" << endl;
        }
        else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
