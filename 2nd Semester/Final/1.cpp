#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s = "$";
    cin >> n;

    while (n--) {
        string a, b;
        cin >> a >> b;

        int index = a.find(b);

        while (index >= 0) {
            string str = a.replace(index, b.length(), "$");
            a = str;
            index = a.find(b);
        }

        cout << a << endl;
    }

    return 0;
}
