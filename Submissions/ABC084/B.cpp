#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B;
    string S;
    cin >> A >> B >> S;
    
    bool is_valid = true;
    if (S.size() != A + B + 1) is_valid = false;
    if (S[A] != '-') is_valid = false;
    for (int i = 0; i < S.size(); i++) {
        if (i != A && !isdigit(S[i])) is_valid = false;
    }
    cout << (is_valid ? "Yes" : "No") << endl;
    return 0;
}