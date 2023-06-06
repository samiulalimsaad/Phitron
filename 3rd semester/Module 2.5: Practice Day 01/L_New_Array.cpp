#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> a(n);
    vector <int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int item : a) {
        b.push_back(item);
    }

    for (int item : b) {
        cout << item << " ";
    }



    return 0;
}
