#include<bits/stdc++.h>
using namespace std;


int add_20(int a) {
    int b = a + 20;
    cout << "Static Memory of b =" << &b << endl;
    return b;
}
int* add_10(int a) {
    int* b = new int;
    *b = a + 10;
    cout << "Dynamic Memory of dynamic b =" << b << endl;
    return b;
}

int main() {

    int* a = add_10(10);

    cout << "Dynamic Memory Address of b after function return =" << a << endl;
    cout << "Dynamic Value of b =" << *a << endl;

    int b = add_20(10);

    cout << "Static Memory Address of b after function return =" << &b << endl;
    cout << "Static Value of b =" << b << endl;


    return 0;
}
