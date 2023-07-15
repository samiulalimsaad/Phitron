#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if (val != -1) root = new Node(val);

    queue<Node*> q;

    if (root) q.push(root);
    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* left = NULL;
        Node* right = NULL;
        if (l != -1) left = new Node(l);
        if (r != -1) right = new Node(r);

        p->left = left;
        p->right = right;

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }

    return root;
}


void level(Node* node, int level) {
    queue<pair<Node*, int>> q;
    if (node)q.push({ node, 0 });

    int l = 0;
    while (!q.empty()) {
        pair<Node*, int> npr = q.front();
        Node* node = npr.first;
        l = npr.second;
        q.pop();

        if (l == level) {
            cout << node->val << " ";
        }
        if (node->left) {
            q.push({ node->left, l + 1 });
        }
        if (node->right) {
            q.push({ node->right, l + 1 });
        }
    }

    if (level > l) cout << "Invalid" << endl;
}


int main() {
    Node* root = input_tree();
    int l;
    cin >> l;

    level(root, l);


    return 0;
}