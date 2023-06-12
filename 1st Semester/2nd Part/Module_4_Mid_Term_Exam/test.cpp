
#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    int age;
    float height;
    char* name;

    Person(int a, float h, char* n) {
        age = a;
        height = h;
        name = n;
    }
};


int main() {

    char name[] = "My Name";
    char anotherName[] = "My Another Name";

    Person p(20, 5.4, name);
    cout << sizeof(p) << endl;


    return 0;
}

// Path: test.cpp