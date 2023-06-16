#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);

    bool flag = false;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            cout << "YES" << endl;
            flag = true;
            break;
        }
    }

    if (!flag)cout << "NO" << endl;

    return 0;
}
