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

int length(Node* node, int count) {
    if (node == NULL) return count;
    return length(node->next, count + 1);
}

void print(Node* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    print(node->next);
}

int main() {

    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int v;

    while (true) {
        cin >> v;
        if (v == -1) break;
        insert_tail(head1, tail1, v);
    }

    while (true) {
        cin >> v;
        if (v == -1) break;
        insert_tail(head2, tail2, v);
    }
    print(head1);
    cout << endl;
    print(head2);
    cout << endl;

    int len1 = length(head1, 0);
    int len2 = length(head2, 0);

    cout << len1 << endl;
    cout << len2 << endl;

    if (len1 == len2) {
        Node* temp1 = head1;
        Node* temp2 = head2;

        while (temp1 != NULL || temp2 != NULL) {
            if (temp1->data != temp2->data) {
                cout << "NO" << endl;
                return 0;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    else {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    return 0;
}
