#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int X, A, B;
    cin >> X >> A >> B;
 
    cout << (B <= A ? "delicious" : B <= A + X ? "safe" : "dangerous") << endl;
 
    return 0;
}