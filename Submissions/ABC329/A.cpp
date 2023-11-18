#include<bits/stdc++.h>
using namespace std;

int main() {
    string S; cin >> S;
    for (int i = 0; i < S.length(); i++) { cout << S[i];
      if (i < S.length() - 1) { cout << " ";}
    }
}