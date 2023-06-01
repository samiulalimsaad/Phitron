#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    bool flag = true;

    cin >> n;

    long long arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int l = 0, r = n - 1; l < r; l++, r--) {
        if (arr[l] != arr[r]) {
            flag = false;
            cout << "NO";
            break;
        }
    }

    if (flag) {
        cout << "YES";
    }

    return 0;
}
