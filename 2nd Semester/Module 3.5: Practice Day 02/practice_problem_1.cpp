#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    string section;
    int math_marks;
    int cls;

    Student(
        string name,
        int roll,
        string section,
        int math_marks,
        int cls
    ) {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};


int main() {

    Student s1("aaa", 11, "qq", 9, 11);
    Student s2("bbb", 22, "www", 8, 22);
    Student s3("ccc", 33, "rrr", 77, 33);

    if (s1.math_marks > s2.math_marks && s1.math_marks > s3.math_marks)
        cout << s1.name;
    else if (s2.math_marks > s1.math_marks && s2.math_marks > s3.math_marks)
        cout << s2.name << endl;
    else if (s3.math_marks > s1.math_marks && s3.math_marks > s2.math_marks)
        cout << s3.name << endl;

    return 0;
}
