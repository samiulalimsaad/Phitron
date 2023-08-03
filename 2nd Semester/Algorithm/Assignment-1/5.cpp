#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int arr[N];

int main() {

    int ls; cin >> ls;
    int arr1[ls + 1];

    for (int i = 0; i < ls; i++) cin >> arr1[i];

    int rs; cin >> rs;
    int arr2[rs + 1];

    for (int i = 0; i < rs; i++) cin >> arr2[i];

    arr1[ls] = INT_MIN;
    arr2[rs] = INT_MIN;

    int lp = 0, rp = 0;

    for (int i = 0; i <= ls + rs; i++) {
        if (arr1[lp] >= arr2[rp]) {
            arr[i] = arr1[lp];
            lp++;
        }
        else {
            arr[i] = arr2[rp];
            rp++;
        }
    }

    for (int i = 0; i < ls + rs; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}
