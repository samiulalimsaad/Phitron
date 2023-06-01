#include<bits/stdc++.h>
using namespace std;

class Cricketer {
public:
    int jersey_no;
    string country;
};


int main() {

    Cricketer* d = new Cricketer();
    d->country = "aaa";
    d->jersey_no = 11;
    Cricketer* k = new Cricketer();
    k->country = "bbb";
    k->jersey_no = 22;

    *k = *d;
    delete d;

    cout << k->country << endl;

    return 0;
}
