#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int arr[N];


bool binary_search(int l, int r, int val) {

    int len = r;

    while (l < r) {
        int mid = (l + r) / 2;

        if (arr[l] == val && l >= 1 && (arr[l - 1] == val || arr[l + 1] == val)) return true;
        else if (arr[r] == val && r <= len - 1 && (arr[r + 1] == val || arr[r - 1] == val)) return true;
        else if (arr[mid] == val && (arr[mid - 1] == val || arr[mid + 1] == val)) return true;
        else if (val < arr[mid]) r = mid - 1;
        else l = mid + 1;
    }
    return false;
}


int main() {
    int n, val; cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> val;

    int result = binary_search(0, n - 1, val);

    if (result) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
