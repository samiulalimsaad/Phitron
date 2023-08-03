#include <bits/stdc++.h>
using namespace std;

int arr[8];

void merge(int l, int r, int mid) {
    int left_size = mid - l + 1;
    int L[left_size + 1];

    int right_size = r - mid;
    int R[right_size + 1];

    for (int i = l, j = 0; i <= mid; i++, j++) {
        L[j] = arr[i];
    }

    for (int i = mid + 1, j = 0; i <= r; i++, j++) {
        R[j] = arr[i];
    }

    L[left_size] = INT_MAX;
    R[right_size] = INT_MAX;

    int lp = 0, rp = 0;

    for (int i = l; i <= r; i++) {
        if (L[lp] <= R[rp]) {
            arr[i] = L[lp];
            lp++;
        }
        else {
            arr[i] = R[rp];
            rp++;
        }
    }


}

void divide(int l, int r) {
    if (l == r) return;

    int mid = (l + r) / 2;

    // cout << "l: " << l << "\tmid: " << mid << "\tr: " << r << endl;

    divide(l, mid);
    divide(mid + 1, r);

    merge(l, r, mid);



}



int main() {
    int n, i = 0; cin >> n;

    while (n--) cin >> arr[i++];

    divide(0, 7);

    for (int v : arr) cout << v << endl;

    return 0;
}
