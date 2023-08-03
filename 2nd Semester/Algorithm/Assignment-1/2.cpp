#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int arr[N];


int binary_search(int l, int r, int val) {

    while (l < r) {
        int mid = (l + r) / 2;

        if (arr[l] == val) return l;
        else if (arr[r] == val) return r;
        else if (arr[mid] == val) return mid;
        else if (val < arr[mid]) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}


int main() {
    int n, val; cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> val;

    int result = binary_search(0, n - 1, val);

    if (result == -1) cout << "Not Found" << endl;
    else cout << result << endl;

    return 0;
}
