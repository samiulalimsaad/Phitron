#include <bits/stdc++.h>
using namespace std;

class Node {

public:
    int data;
    Node* next;
    Node* prev;
    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};


class Stack {
private:
    Node* _head = NULL;
    Node* _tail = NULL;
public:
    void push(int value) {
        Node* newNode = new Node(value);
        if (this->_tail == NULL) {
            this->_head = newNode;
            this->_tail = newNode;
            return;
        }
        this->_tail->next = newNode;
        newNode->prev = this->_tail;
        this->_tail = this->_tail->next;
    }

    void pop() {
        if (this->_tail == NULL) {
            return;
        }
        this->_tail = this->_tail->prev;
    }

    void print_values(Node* node) {
        if (node == NULL) return;
        cout << node->data << " ";
        this->print_values(node->next);
    }

    void print() {
        this->print_values(this->_head);
    }

    int top() {
        return this->_tail->data;
    }

    bool is_empty() {
        return this->_tail == NULL;
    }

};


class Queue {
private:
    Node* _head = NULL;
    Node* _tail = NULL;

public:
    void push(int value) {
        Node* newNode = new Node(value);
        if (this->_tail == NULL) {
            this->_head = newNode;
            this->_tail = newNode;
            return;
        }
        this->_tail->next = newNode;
        newNode->prev = this->_tail;
        this->_tail = this->_tail->next;
    }

    void pop() {
        if (this->_tail == NULL) {
            return;
        }
        this->_head = this->_head->next;
    }

    void print_values(Node* node) {
        if (node == NULL) return;
        cout << node->data << " ";
        this->print_values(node->next);
    }

    void print() {
        this->print_values(this->_head);
    }

    int front() {
        return this->_head->data;
    }

    int back() {
        return this->_tail->data;
    }

    bool is_empty() {
        return this->_tail == NULL || this->_head == NULL;
    }

};






int main() {

    Queue queue;
    Stack stack;
    int n, m, v;

    cin >> n >> m;

    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }


    for (int i = 0; i < n; i++) {
        cin >> v;
        stack.push(v);
    }

    for (int i = 0; i < m; i++) {
        cin >> v;
        queue.push(v);
    }


    for (int i = 0; i < m; i++) {
        if (stack.top() != queue.front()) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;





    return 0;
}
