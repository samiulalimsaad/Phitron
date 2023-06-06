#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int count = 0;

    for (auto it : a) {
        if (freq.count(it + 1) > 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
