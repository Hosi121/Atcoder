#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int diff = abs(X - Y);

    if (diff == 1 || diff == 2 || (X > Y && diff == 3)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}
