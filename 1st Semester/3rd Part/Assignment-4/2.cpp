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
    if (val == -1)root = NULL;
    else root = new Node(val);

    queue<Node*> q;

    if (root)
        q.push(root);
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


void reverse(Node* root, int& minVal, int& maxVal) {
    if (root == NULL) return;

    if (root->left == NULL && root->right == NULL) {
        minVal = min(minVal, root->val);
        maxVal = max(maxVal, root->val);
    }

    reverse(root->left, minVal, maxVal);
    reverse(root->right, minVal, maxVal);
}


int main() {
    Node* root = input_tree();
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    reverse(root, minVal, maxVal);

    cout << maxVal << " " << minVal << endl;


    return 0;
}
