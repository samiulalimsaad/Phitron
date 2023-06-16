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

int length(Node* node, int count) {
    if (node == NULL) return 0;

    return count + length(node->next, count);

}

void find_middle(Node* node) {
    int middle[2] = { -1 };
    int len = length(node, 1) - 1;
    int i = 0;
    Node* temp = node;

    while (temp != NULL) {

        if (i == len / 2 || i == (len / 2) + 1) {
            middle[i - (len / 2)] = temp->data;
        }
        temp = temp->next;
        i++;

    }

    if (len % 2) {
        cout << middle[0] << " " << middle[1] << endl;
    }
    else {
        cout << middle[0] << endl;
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

    find_middle(head);


    return 0;
}