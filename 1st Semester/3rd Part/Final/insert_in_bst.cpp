#include <bits/stdc++.h>
using namespace std;

vector<int> insert_max_heap() {
    vector<int> v;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1;
        int parent_idx;
        while (cur_idx != 0) {
            parent_idx = (cur_idx - 1) / 2;
            if (v[parent_idx] < v[cur_idx]) swap(v[parent_idx], v[cur_idx]);
            cur_idx = parent_idx;
        }
    }

    return v;
}

vector<int> make_unique(vector<int> v) {
    vector<int> unq;
    set<int> unq_set;

    for (int val : v) {
        if (!unq_set.count(val)) {
            unq.push_back(val);
            unq_set.insert(val);
        }
    }

    return unq;
}


void print(vector<int> v) {
    for (int val : v)
        cout << val << " ";

    cout << endl;
}

int main() {
    int t;cin >> t;

    while (t--) {
        print(make_unique(insert_max_heap()));
    }


    return 0;
}
