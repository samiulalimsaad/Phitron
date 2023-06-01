#include<bits/stdc++.h>
using namespace std;


void smallest_pair(long long arr[], int n) {
    long long m = INT_MAX;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            long long temp = arr[i - 1] + arr[j - 1] + j - i;
            m = min(temp, m);
        }
    }
    cout << m;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        smallest_pair(arr, n);

    }

    return 0;
}
