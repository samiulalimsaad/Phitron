#include <bits/stdc++.h>
using namespace std;

int main() {

    string a;
    int map[26] = { 0 };
    cin >> a;

    for (int item : a) {
        map[item - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (map[i] > 0) {
            cout << (char)(i + 'a') << " : " << map[i] << endl;
        }

    }


    return 0;
}
