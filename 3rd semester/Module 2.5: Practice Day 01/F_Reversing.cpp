#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector <long int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    reverse(a.begin(), a.end());

    for (long int item : a) {
        cout << item << " ";
    }



    return 0;
}
