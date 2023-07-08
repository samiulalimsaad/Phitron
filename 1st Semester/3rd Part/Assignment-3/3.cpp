#include <bits/stdc++.h>
using namespace std;





int main() {

    queue<string> q;

    int t, v;
    string str;

    cin >> t;

    while (t--) {
        cin >> v;

        if (v == 1) {
            if (q.empty()) {
                cout << "Invalid" << endl;
            }
            else {
                cout << q.front() << endl;
                q.pop();

            }
        }
        else if (v == 0) {
            cin >> str;
            q.push(str);
        }
    }



    return 0;
}
