#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B;
    cin >> A >> B;
    cout << ((A+B) % 2 == 0 ? (A+B) / 2 : ((A+B) / 2) + 1) << endl;
 
    return 0;
}