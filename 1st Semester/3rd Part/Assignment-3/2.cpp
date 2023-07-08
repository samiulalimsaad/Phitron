#include <bits/stdc++.h>
using namespace std;





int main() {

    queue<int> q;
    stack<int> s;
    int n, m, v;

    cin >> n >> m;

    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }


    for (int i = 0; i < n; i++) {
        cin >> v;
        s.push(v);
    }

    for (int i = 0; i < m; i++) {
        cin >> v;
        q.push(v);
    }


    vector<int> list1(n);
    vector<int> list2(m);

    for (int i = 0; i < m; i++) {
        list1.push_back(s.top());
        list2.push_back(q.front());
        s.pop();
        q.pop();
    }

    if (list1 == list2) cout << "YES" << endl;
    else cout << "NO" << endl;





    return 0;
}
