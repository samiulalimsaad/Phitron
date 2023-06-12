#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
};


bool compare(Student a, Student b) {
    return  a.marks == b.marks ? a.roll < b.roll : a.marks > b.marks;
}

int main() {

    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].roll >> students[i].marks;
    }

    sort(students, students + n, compare);

    for (int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }


    return 0;
}
