#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL && tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_head(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    head->next = newNode;
    head = newNode;
}

void print(Node* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    print(node->next);
}

void reverse(Node*& head, Node* cur) {
    if (cur->next == NULL) {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

int length(Node* node, int count) {
    if (node == NULL) return count;
    return length(node->next, count + 1);
}

void isPalindrome(Node* h, Node* t) {

    while (h != NULL) {
        if (h->data != t->data) {
            cout << "NO" << endl;
            return;
        }
        h = h->next;
        t = t->next;
    }
    cout << "YES" << endl;
}

int main() {

    Node* original_head = NULL;
    Node* original_tail = NULL;

    Node* head = NULL;
    Node* tail = NULL;

    int v;

    while (true) {
        cin >> v;
        if (v == -1) break;
        insert_tail(head, tail, v);
        insert_tail(original_head, original_tail, v);
    }

    Node* t = head;
    reverse(t, head);

    isPalindrome(original_head, t);


    return 0;
}
