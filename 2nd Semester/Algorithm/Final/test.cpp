#include <bits/stdc++.h>
using namespace std;
int min_char(string a) {

    int n = a.size();

    int i = 0, j = n - 1, c = 0;


    while (i < n / 2) {
        if (a[i] != a[n - i - 1]) {
            ++c;
        }
        i++;
        --j;
    }


    return c;
}

int main(int argc, char const* argv[]) {
    int t; cin >> t;

    while (t--) {
        string a;
        cin >> a;
        cout << min_char(a) << endl;
    };
    return 0;
}
