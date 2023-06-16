#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

void insert(Node*& head, Node*& tail, int v) {
    Node* node = new Node(v);

    if (head == NULL) {
        head = node;
        tail = node;
        return;
    }
    tail->next = node;
    tail = node;
}


void print(Node* node) {
    if (node == NULL) return;
    cout << node->data << endl;
    print(node->next);

}

int find_max(Node* node) {
    if (node == NULL) return INT_MIN;
    return max(node->data, find_max(node->next));
}

int find_min(Node* node) {
    if (node == NULL) return INT_MAX;
    return min(node->data, find_min(node->next));
}


int main() {

    Node* head = NULL;
    Node* tail = NULL;

    int n;

    while (true) {
        cin >> n;

        if (n == -1) break;

        insert(head, tail, n);
    }
    cout << find_max(head) << " " << find_min(head) << endl;



    return 0;
}