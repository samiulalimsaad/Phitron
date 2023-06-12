#include<bits/stdc++.h>
using namespace std;


int main() {

    string str, match = "EGYPT", rev_str;
    getline(cin, str);

    int index = str.find(match);
    while (index > 0) {
        rev_str = str.replace(index, match.length(), " ");
        str = rev_str;
        index = str.find(match);
    }

    cout << str;

    return 0;
}
