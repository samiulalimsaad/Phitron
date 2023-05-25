#include<bits/stdc++.h>
using namespace std;

int main() {

    char c[5];

    for (int i = 0; i < 5; i++) {
        cin >> c[i];
    }

    int result, flag = 0;

    if (c[1] == '+' && c[0] + c[2] == c[4]) {
        result = c[0] + c[2];
        flag
    }
    if (
        (c[1] == '+' && c[0] + c[2] == c[4]) ||
        (c[1] == '-' && c[0] - c[2] == c[4]) ||
        (c[1] == '*' && c[0] * c[2] == c[4])) {
        cout << "Yes" << endl;
    }
    if (
        (c[1] == '+' && c[0] + c[2] == c[4]) ||
        (c[1] == '-' && c[0] - c[2] == c[4]) ||
        (c[1] == '*' && c[0] * c[2] == c[4])) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }



    return 0;
}
