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


void print(Node* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    print(node->next);
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

    print(head);

    for (Node* i = head; i->next != NULL; i = i->next) {
        for (Node* j = head; j->next != NULL; j = j->next) {
            if (i->data < j->data) swap(i->data, j->data);
        }
    }

    cout << endl;
    print(head);

    return 0;
}
