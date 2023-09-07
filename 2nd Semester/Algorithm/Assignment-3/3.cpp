#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int a, b;
    long long w;

    Edge(int a, int b, long long w) {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

bool compare(Edge a, Edge b) {
    return a.w < b.w;
}

const int N = 1e5 + 5;

int parent[N];
int parentSize[N];

void set_default(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = -1;
        parentSize[i] = 1;
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
        if (parentSize[la] > parentSize[lb]) {
            parent[lb] = la;
            parentSize[la] += parentSize[lb];
        }
        else {
            parent[la] = lb;
            parentSize[lb] += parentSize[la];
        }
    }
}
int main() {
    int n, e;
    cin >> n >> e;
    vector<Edge> v;
    vector<Edge> ans;

    set_default(n);

    while (e--) {
        long long a, b, w;
        cin >> a >> b >> w;
        v.push_back(Edge(a, b, w));
    }

    sort(v.begin(), v.end(), compare);

    for (Edge val : v) {
        int a = val.a;
        int b = val.b;

        int la = find_parent(a);
        int lb = find_parent(b);
        if (la == lb) continue;
        ans.push_back(val);
        make_union(a, b);
    }

    long long sum = 0;

    for (Edge val : ans) sum += val.w;

    if (ans.size() == n - 1) cout << sum << endl;
    else cout << -1 << endl;
    return 0;
}