#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B;
    cin >> A >> B;
    cout << (A+B < 10 ? to_string(A+B) : "error") << endl;
    return 0;
}