#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<int> S(8);
    for (int i = 0; i < 8; i++) {
        cin >> S[i];
    }
 
    bool Increasing = true;
    bool Range = true;
    bool mod25 = true;
 
    for (int i = 1; i < 8; i++) {
        if (S[i] < S[i - 1]) {
            Increasing = false;
            break;
        }
    }
 
    for (int i = 0; i < 8; i++) {
        if (S[i] < 100 || S[i] > 675) {
            Range = false;
            break;
        }
    }
 
    for (int i = 0; i < 8; i++) {
        if (S[i] % 25 != 0) {
            mod25 = false;
            break;
        }
    }
 
    if (Increasing && Range && mod25) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
 
    return 0;
}