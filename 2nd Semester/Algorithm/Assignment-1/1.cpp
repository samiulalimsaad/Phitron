#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int arr[N];

void merge(int l, int r, int mid) {
    int ls = mid - l + 1;
    int L[ls + 1];

    for (int i = l, j = 0; i <= mid; i++, j++) {
        L[j] = arr[i];
    }


    int rs = r - mid;
    int R[rs + 1];

    for (int i = mid + 1, j = 0; i <= r; i++, j++) {
        R[j] = arr[i];
    }

    L[ls] = INT_MIN;
    R[rs] = INT_MIN;

    int lp = 0, rp = 0;

    for (int i = l; i <= r; i++) {
        if (L[lp] >= R[rp]) {
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

    divide(l, mid);
    divide(mid + 1, r);

    merge(l, r, mid);



}



int main() {
    int n, i = 0; cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    divide(0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}
