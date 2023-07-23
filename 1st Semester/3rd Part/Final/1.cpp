#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        priority_queue<int> pq;
        set<int> unq;

        for (int i = 0; i < n; i++) {
            if (unq.find(arr[i]) == unq.end()) {
                pq.push(arr[i]);
                unq.insert(arr[i]);
            }
        }

        while (!pq.empty()) {
            cout << pq.top() << " ";
            pq.pop();
        }

        cout << endl;
    }

    return 0;
}
