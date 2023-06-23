#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void insert_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void print(Node* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    print(node->next);
}
void reverse(Node* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    reverse(node->prev);
}

int length(Node* node, int count) {
    if (node == NULL) return count;
    return length(node->next, count + 1);
}

void insert_at_position(Node*& head, Node*& tail, int pos, int val) {
    Node* node = head;
    Node* newNode = new Node(val);

    for (int i = 1; i < pos; i++) {
        node = node->next;
    }
    newNode->next = node->next;
    node->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = node;

}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    int t, p, v;

    cin >> t;

    while (t--) {
        cin >> p >> v;
        int len = length(head, 0);
        if (p > len) {
            cout << "Invalid" << endl;
            continue;
        }
        else if (p == 0) insert_head(head, tail, v);
        else if (p == len) insert_tail(head, tail, v);
        else insert_at_position(head, tail, p, v);
        cout << "L -> ";
        print(head);
        cout << endl;
        cout << "R -> ";
        reverse(tail);
        cout << endl;
    }



    return 0;
}