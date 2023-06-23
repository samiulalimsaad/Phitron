#include <bits/stdc++.h>
using namespace std;


int main() {


    list<int> my_list;

    int v;

    while (true) {
        cin >> v;
        if (v == -1) break;
        my_list.push_back(v);
    }
    my_list.sort();

    my_list.unique();
    for (auto it : my_list) cout << it << " ";

    return 0;
}
