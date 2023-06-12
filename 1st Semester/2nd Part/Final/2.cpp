#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    bool found = false;

    while (ss >> word) {
        if (word == "Ratul") {
            cout << "YES" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "NO" << endl;
    }

    return 0;
}
