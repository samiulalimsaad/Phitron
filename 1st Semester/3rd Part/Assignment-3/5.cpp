#include <bits/stdc++.h>
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
    return makeString(s);
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string str;
        cin >> str;

        cout << final(final(str)) << endl;

    }

    return 0;
}
