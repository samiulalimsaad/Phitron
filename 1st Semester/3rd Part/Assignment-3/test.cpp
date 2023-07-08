#include <iostream>
#include <stack>
using namespace std;

char mix(char c1, char c2) {
    if ((c1 == 'R' && c2 == 'B') || (c1 == 'B' && c2 == 'R')) return 'P';
    if ((c1 == 'R' && c2 == 'G') || (c1 == 'G' && c2 == 'R')) return 'Y';
    if ((c1 == 'B' && c2 == 'G') || (c1 == 'G' && c2 == 'B')) return 'C';
    return '\0';
}

string makeString(stack<char>s) {
    string f;
    while (!s.empty()) {
        f = s.top() + f;
        s.pop();
    }
    return f;
}

string final(string str) {
    stack<char> s;

    for (char c : str) {
        if (!s.empty() && s.top() == c) {
            s.pop();
        }
        else if (!s.empty() && mix(s.top(), c) != '\0') {
            char mixed = mix(s.top(), c);
            s.pop();
            s.push(mixed);
        }
        else {
            s.push(c);
        }
    }

    string ss = makeString(s);

    stack<char> temp;
    for (char c : ss) {
        if (!temp.empty() && temp.top() == c) {
            temp.pop();
        }
        else if (!temp.empty() && mix(temp.top(), c) != '\0') {
            char mixedColor = mix(temp.top(), c);
            temp.pop();
            temp.push(mixedColor);
        }
        else {
            temp.push(c);
        }
    }

    return makeString(temp);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string colors;
        cin >> colors;

        string finalColors = final(colors);

        cout << finalColors << endl;

    }

    return 0;
}
