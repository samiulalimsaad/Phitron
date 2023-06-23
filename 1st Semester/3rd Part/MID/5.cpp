#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    Node* prev;
    Node(string value) {
        this->data = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node*& head, Node*& tail, string val) {
    Node* newNode = new Node(val);
    if (head == NULL && tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print(Node* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    print(node->next);
}

void reverse(Node* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    reverse(node->prev);
}

int length(Node* node, int count) {
    if (node == NULL) return count;
    return length(node->next, count + 1);
}

Node* find(Node* head, string val) {

    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == val) break;
        temp = temp->next;
    }
    return temp;
}


int main() {
    Node* head = NULL;
    Node* tail = NULL;
    Node* current = NULL;

    string str;
    while (true) {
        cin >> str;
        if (str == "end") break;
        insert_tail(head, tail, str);
    }

    int t;
    cin >> t;

    while (t--) {
        cin >> str;

        if (str == "visit") {
            cin >> str;
            Node* node = find(head, str);
            if (node == NULL) cout << "Not Available" << endl;
            else {
                current = node;
                cout << current->data << endl;
            }
        }
        else if (str == "next") {
            if (current == NULL || current->next == NULL) cout << "Not Available" << endl;
            else {
                current = current->next;
                cout << current->data << endl;
            };
        }
        else if (str == "prev") {
            if (current == NULL || current->prev == NULL) cout << "Not Available" << endl;
            else {
                current = current->prev;
                cout << current->data << endl;
            };
        }
    }

    return 0;
}