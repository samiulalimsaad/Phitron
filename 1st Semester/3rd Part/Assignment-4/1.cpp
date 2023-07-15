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

int get_sum(Node* root) {
    if (root == NULL) return 0;
    return root->val + get_sum(root->left) + get_sum(root->right);
}

int main() {
    Node* root = input_tree();
    cout << get_sum(root) << endl;
    return 0;
}