#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    stringstream str(s);

    string word;
    int count = 0;

    while (str >> word) {
        if ((word >= "A" && word <= "Z") || (word >= "a" && word <= "z")) {
            count++;
        }
    }

    cout << count << endl;


    return 0;
}
