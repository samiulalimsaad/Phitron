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


int main() {

    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;


    int n;
    while (true) {
        cin >> n;
        if (n == -1) break;
        insert(head1, tail1, n);
    }

    while (true) {
        cin >> n;
        if (n == -1) break;
        insert(head2, tail2, n);
    }

    int len1 = length(head1, 1);
    int len2 = length(head2, 1);


    if (len1 == len2) {
        Node* temp1 = head1;
        Node* temp2 = head2;

        while (temp1 != NULL) {
            if (temp1->data != temp2->data) {
                cout << "NO" << endl;
                return 0;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }




    return 0;
}