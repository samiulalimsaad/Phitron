#include<bits/stdc++.h>
using namespace std;


int main() {

    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        int n = str.length();

        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n / 2; i++) {
            sum1 += str[i] - '0';
        }
        for (int i = n / 2; i < n; i++) {
            sum2 += str[i] - '0';
        }

        if (sum1 == sum2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }


    }



    return 0;
}
