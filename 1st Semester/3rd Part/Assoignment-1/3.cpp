#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        bool flag = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }


        for (int i = 1; i < n; i++) {
            if (a[i - 1] > a[i]) {
                flag = true;
                cout << "NO" << endl;
                break;
            }
        }

        if (!flag) {
            cout << "YES" << endl;
        }
    }




    return 0;
}
