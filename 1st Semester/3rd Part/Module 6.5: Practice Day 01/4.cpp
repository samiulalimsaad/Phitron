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

void insert_at_position(Node*& head, int v, int pos) {
    Node* node = new Node(v);
    Node* temp = head;

    if (pos == 0) {
        node->next = head;
        head = node;
        return;
    }
    for (int i = 1; i < pos; i++) {
        if (temp->next == NULL) {
            cout << "Invalid" << endl;
            return;
        }
        temp = temp->next;
    }

    node->next = temp->next;
    temp->next = node;



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

    int pos, v, t;

    cin >> t;

    while (t--) {
        cin >> pos >> v;
        insert_at_position(head, v, pos);
        print(head);
        cout << endl;
    }





    return 0;
}
