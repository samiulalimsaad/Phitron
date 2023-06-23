#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
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
    tail = newNode;
}

void print(Node* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    print(node->next);
}


void sort(Node* head) {
    for (Node* i = head; i->next != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) swap(i->data, j->data);
        }
    }
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

    sort(head);

    Node* temp = head;
    Node* newNode = NULL;
    Node* newNodeT = NULL;
    while (temp->next != NULL) {
        if (temp->data == temp->next->data) {
            temp = temp->next;
            continue;
        }
        insert_tail(newNode, newNodeT, temp->data);
        temp = temp->next;
    }
    insert_tail(newNode, newNodeT, temp->data);

    print(newNode);


    return 0;
}
