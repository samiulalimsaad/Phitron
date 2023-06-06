#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;

    for (auto it : a) {
        if (find(a.begin(), a.end(), it + 1) != a.end()) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
