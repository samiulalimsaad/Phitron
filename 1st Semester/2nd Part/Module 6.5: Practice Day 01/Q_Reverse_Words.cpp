#include<bits/stdc++.h>
using namespace std;

void reverse(stringstream& str) {
    string t = "";
    string word;
    while (str >> word) {
        for (int i = word.length() - 1; i >= 0; i--) {
            t += word[i];
        }
        cout << t << " ";
        // reverse(str);
        t = "";
    }

}

int main() {

    string s;
    getline(cin, s);

    stringstream str(s);
    string word;

    reverse(str);



    return 0;
}
