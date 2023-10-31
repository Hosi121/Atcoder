#include <bits/stdc++.h>
using namespace std;

bool ans(int num) {
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;
    return hundreds * tens == ones;
}

int main() {
    int N;
    cin >> N;

    for (int i = N; i <= 919; ++i) {
        if (ans(i)) {
            cout << i << endl;
            break;
        }
    }

}