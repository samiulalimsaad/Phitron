#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, q;
    cin >> n >> q;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> sums(n + 1);
    for (int i = 1; i <= n; i++) {
        sums[i] = sums[i - 1] + a[i - 1];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        int sum = sums[r] - sums[l - 1];

        cout << sum << endl;
    }



    return 0;
}
