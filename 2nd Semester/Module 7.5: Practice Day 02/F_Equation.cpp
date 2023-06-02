#include<bits/stdc++.h>
using namespace std;


int main() {

    int a, b;
    cin >> a >> b;

    long long sum = 0;
    for (int i = 0; i < b; i += 2) {
        if (i == 0) sum += pow(a, i) - 1;
        else sum += pow(a, i);
    }
    cout << sum << endl;



    return 0;
}
