#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string A;
    cin >> A;
 
    int sum = 0;
    for (char c : A) {
        sum += c - '0';
    }
 
    cout << (stoi(A) % sum == 0 ? "Yes" : "No") << endl;
    return 0;
}