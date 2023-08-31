#include <bits/stdc++.h>
using namespace std;

const int N = 10e5 + 5;

int parent[N];
int level[N];

void set_default(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = -1;
        level[i] = 0;
    }
}

int find_parent(int node) {
    while (parent[node] != -1) node = parent[node];
    return node;
}

void make_union(int a, int b) {
    int la = find_parent(a);
    int lb = find_parent(b);

    if (la != lb) {
        if (level[la] > level[lb]) parent[lb] = la;
        else if (level[lb] > level[la]) parent[la] = lb;
        else {
            parent[lb] = la;
            level[la]++;
        }
    }
}
int main() {
    int n, e, c = 0;
    cin >> n >> e;

    set_default(n);

    while (e--) {
        int a, b;
        cin >> a >> b;

        int la = find_parent(a);
        int lb = find_parent(b);

        if (la == lb) ++c;
        else make_union(a, b);
    }

    cout << c << endl;
    return 0;
}