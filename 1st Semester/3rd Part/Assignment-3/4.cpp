#include <bits/stdc++.h>
using namespace std;

bool isValid(string str) {
    stack<char> s;
    for (char c : str) {
        if (
            !s.empty() &&
            (
                (c == 'B' && s.top() == 'A') ||
                (c == 'A' && s.top() == 'B'))
            ) {
            s.pop();
        }
        else {
            s.push(c);
        }
    }
    return s.empty();
}

int main() {


    int t;

    cin >> t;

    while (t--) {
        string str;
        cin >> str;
        isValid(str) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
