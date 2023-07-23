#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> count;
        int max_count = 0, max_num = INT_MIN;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            count[num]++;

            if (count[num] > max_count) {
                max_count = count[num];
                max_num = num;
            }
            else if (count[num] == max_count && num > max_num) {
                max_num = num;
            }
        }

        cout << max_num << " " << max_count << endl;
    }

    return 0;
}
