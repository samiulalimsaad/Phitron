#include<bits/stdc++.h>
using namespace std;


int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int fq[26] = { 0 };

        for (int i = 0; i < n; i++) {
            int index = str[i] - 'A';

            if (fq[index] == 0) {
                fq[index] += 2;
            }
            else {
                fq[index]++;
            }
        }

        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (fq[i] > 0) {
                count += fq[i];
            }
        }
        cout << count << endl;
    }



    return 0;
}
