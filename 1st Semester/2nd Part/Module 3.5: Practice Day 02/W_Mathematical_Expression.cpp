#include<bits/stdc++.h>
using namespace std;

int main() {

    long long a, b, c;
    char op, eq;
    cin >> a >> op >> b >> eq >> c;
    // cout << a << " " << op << " " << b << " " << eq << a + b << " = ";
    if (
        (op == '+' && a + b == c) ||
        (op == '-' && a - b == c) ||
        (op == '*' && a * b == c)) {
        cout << "Yes" << endl;
    }
    else {
        if (op == '+') {
            cout << a + b << endl;
        }
        else if (op == '-') {
            cout << a - b << endl;
        }
        else {
            cout << a * b << endl;
        }

    }



    return 0;
}
