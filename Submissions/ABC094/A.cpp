#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    cout << (A > C ? "NO" : (A+B > C ? "YES" : "NO")) << endl;
 
    return 0;
}