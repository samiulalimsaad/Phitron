#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};


bool cmpr(Student a, Student b) {
    int as = a.math_marks + a.eng_marks;
    int bs = b.math_marks + b.eng_marks;
    if (as == bs) {
        return a.id < b.id;
    }
    return as > bs;
}

int main() {

    int n;

    cin >> n;

    Student* students = new Student[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + n, cmpr);

    for (int i = 0; i < n; i++) {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
