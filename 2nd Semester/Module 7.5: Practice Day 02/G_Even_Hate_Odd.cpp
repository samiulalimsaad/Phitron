#include<bits/stdc++.h>
using namespace std;


int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int even = 0, odd = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }

        if (n % 2 != 0) {
            cout << -1 << endl;
        }
        else if (even == odd) {
            cout << even << endl;
        }
        else if (even == odd) {
            cout << even << endl;
        }

    }



    return 0;
}
