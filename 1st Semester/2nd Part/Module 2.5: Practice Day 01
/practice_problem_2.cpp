#include<bits/stdc++.h>
using namespace std;


int* get_array(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

int main() {
    int  m, n;

    cin >> m;
    int* a = get_array(m);
    cin >> n;
    int* b = new int[m + n];

    for (int i = 0; i < m; i++) {
        b[i] = a[i];
    }

    for (int i = m; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
