#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> fq(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (fq[a[i]] == 1) {
            cout << "YES" << endl;
            return 0;
        }
        else {
            fq[a[i]]++;
        }
    }

    cout << "NO" << endl;

    return 0;
}
