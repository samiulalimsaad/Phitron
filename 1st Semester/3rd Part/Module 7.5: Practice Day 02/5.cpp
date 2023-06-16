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

    cout << node->data << " ";

    print(node->next);

}

int length(Node* node, int count) {
    if (node == NULL) return 1;

    return count + length(node->next, count);

}

void sort(Node* node) {

    for (Node* i = node; i->next != NULL; i = i->next) {
        for (Node* j = i; j->next != NULL; j = j->next) {
            if (i->data > j->data) {
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
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

    print(head);
    cout << endl;
    sort(head);
    print(head);
    cout << endl;



    return 0;
}
