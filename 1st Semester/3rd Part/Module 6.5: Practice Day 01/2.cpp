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

string find_duplicate(Node* node) {
    int count[100] = { 0 };
    Node* temp = node;

    while (temp != NULL) {
        count[temp->data]++;
        temp = temp->next;
    }

    for (int i = 0; i < 100; i++) {
        if (count[i] > 1) {
            return "YES";
        }
    }
    return "NO";

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

    cout << find_duplicate(head) << endl;


    return 0;
}
