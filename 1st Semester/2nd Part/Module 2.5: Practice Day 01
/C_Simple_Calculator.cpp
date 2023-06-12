#include<bits/stdc++.h>
using namespace std;

int main() {
    long long  x, y;

    cin >> x >> y;

    long long r1 = x + y;
    long long r2 = x * y;
    long long r3 = x - y;

    cout << x << " + " << y << " = " << r1 << endl;
    cout << x << " * " << y << " = " << r2 << endl;
    cout << x << " - " << y << " = " << r3 << endl;


    return 0;
}
