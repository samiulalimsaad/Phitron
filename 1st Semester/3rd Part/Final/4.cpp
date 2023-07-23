#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cin >> q;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; ++i) {
        minHeap.push(arr[i]);
    }

    while (q--) {
        int cmd;
        cin >> cmd;

        if (cmd == 0) {
            int x;
            cin >> x;
            minHeap.push(x);
            cout << minHeap.top() << endl;
        }
        else if (cmd == 1) {
            if (!minHeap.empty()) {
                cout << minHeap.top() << endl;
            }
            else {
                cout << "Empty" << endl;
            }
        }
        else if (cmd == 2) {
            if (!minHeap.empty()) {
                minHeap.pop();
                if (!minHeap.empty()) {
                    cout << minHeap.top() << endl;
                }
                else {
                    cout << "Empty" << endl;
                }
            }
            else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
