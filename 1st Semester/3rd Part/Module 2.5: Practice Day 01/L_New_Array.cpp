#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> a(n);
    vector <int> b(n);
    vector <int> c;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int item : b) {
        c.push_back(item);
    }

    for (int item : a) {
        c.push_back(item);
    }

    for (int item : c) {
        cout << item << " ";
    }



    return 0;
}
