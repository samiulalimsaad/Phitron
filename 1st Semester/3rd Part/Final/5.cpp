#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
};

class cmp {
public:
    bool operator()(Student a, Student b) {
        return (a.marks != b.marks) ? a.marks < b.marks : a.roll > b.roll;
    }
};


int main() {
    int n, q;
    cin >> n;

    vector<Student> students(n);
    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].roll >> students[i].marks;
    }

    cin >> q;
    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; i++) {
        pq.push(students[i]);
    }

    while (q--) {
        int cmd;
        cin >> cmd;

        if (cmd == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push({ name, roll, marks });
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (cmd == 1) {
            if (!pq.empty()) {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else {
                cout << "Empty" << endl;
            }
        }
        else if (cmd == 2) {
            if (!pq.empty()) {
                pq.pop();
                if (!pq.empty()) {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
                else {
                    cout << "Empty" << endl;
                }
            }
            else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
