#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int count = 0;
    for(int i = 0; i < S.size() / 2; i++) {
        if(S[i] != S[S.size() - 1 - i]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
