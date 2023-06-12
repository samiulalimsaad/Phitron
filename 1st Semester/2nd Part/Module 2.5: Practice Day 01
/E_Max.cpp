#include<bits/stdc++.h>
using namespace std;

int main() {
    int  n;

    cin >> n;

    long long arr[n], m = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        m = max(m, arr[i]);
    }

    cout << m;

    return 0;
}
