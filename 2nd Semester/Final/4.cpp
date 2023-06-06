#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    string s;
    int id;
};


int main() {

    int n;

    cin >> n;

    Student* students = new Student[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
    }

    int i = n;
    while (i > n / 2) {
        i--;
        swap(students[i].id, students[n - i - 1].id);
    }

    for (int i = 0; i < n; i++) {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;
    }

    return 0;
}
