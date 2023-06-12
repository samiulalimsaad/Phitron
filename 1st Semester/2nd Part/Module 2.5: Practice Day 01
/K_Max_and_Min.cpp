#include<bits/stdc++.h>
using namespace std;

int main() {

    long long arr[3], m = INT_MIN, mi = INT_MAX;

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        m = max(m, arr[i]);
        mi = min(mi, arr[i]);
    }

    cout << mi << " " << m;

    return 0;
}
