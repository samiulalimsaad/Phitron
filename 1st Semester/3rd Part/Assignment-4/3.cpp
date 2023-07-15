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

void reverse(Node* root) {

    queue<Node*> q;
    stack<Node*> s;
    if (root) q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        s.push(current);

        if (current->right) q.push(current->right);
        if (current->left) q.push(current->left);
    }

    while (!s.empty()) {
        Node* current = s.top();
        s.pop();
        cout << current->val;
        if (!s.empty()) cout << " ";
    }
}


int main() {
    Node* root = input_tree();

    reverse(root);


    return 0;
}