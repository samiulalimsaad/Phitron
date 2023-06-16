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

void insert_head(Node*& head, Node*& tail, int v) {
    Node* node = new Node(v);

    if (head == NULL) {
        head = node;
        tail = node;
        return;
    }
    node->next = head;
    head = node;
}


void print(Node* node) {
    if (node == NULL) return;

    cout << node->data << " ";

    print(node->next);

}


int main() {

    Node* head = NULL;
    Node* tail = NULL;

    int t;
    cin >> t;

    while (t--) {
        int pos, n;

        cin >> pos >> n;

        if (pos == 0 || head == NULL) {
            insert_head(head, tail, n);
        }if (pos == 1) {
            insert(head, tail, n);
        }


        // print(head);

        cout << head->data << " " << tail->data << endl;

    }

    return 0;
}