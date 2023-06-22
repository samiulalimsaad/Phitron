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
    if (head == NULL && tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void print(Node* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    print(node->next);
}

int length(Node* node, int count) {
    if (node == NULL) return count;
    return length(node->next, count + 1);
}

void reverse(Node* head, Node* tail) {
    int len = length(head, 0);
    Node* h = head;
    Node* t = tail;

    for (int i = 0; i < len / 2 - 1; i++) {
        swap(h->data, t->data);
        h = h->next;
        t = t->prev;
    }
    swap(h->data, t->data);

}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    int v;

    while (true) {
        cin >> v;
        if (v == -1) break;
        insert_tail(head, tail, v);
    }

    reverse(head, tail);
    print(head);


    return 0;
}
