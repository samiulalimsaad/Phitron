#include <bits/stdc++.h>
using namespace std;
#define pii pair<long int,long int>

vector<pii> arr;

int main() {

    int e; cin >> e;

    priority_queue<pii, vector<pii>, greater<pii>> pq;

    while (e--) {
        long int a, b;
        cin >> a >> b;
        pq.push({ a,b });
    }

    while (!pq.empty()) {
        pii t = pq.top();
        pq.pop();
        long int a = t.first;
        long int b = t.second;
        cout << a << " " << b << endl;
    }

    return 0;
}