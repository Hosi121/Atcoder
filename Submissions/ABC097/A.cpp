#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((abs(a-b) <= d and abs(b-c) <= d) or abs(a-c)<=d) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}