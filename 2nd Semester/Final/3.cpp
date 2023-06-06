#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    string cls;
    string s;
    int math_marks;
    int eng_marks;
};


int main() {

    int n;

    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].math_marks >> students[i].eng_marks;
    }

    int i = n;
    while (i--) {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
