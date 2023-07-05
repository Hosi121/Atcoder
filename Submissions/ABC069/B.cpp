#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string A;
    cin >> A;
    string ans = string(1, A[0]) + to_string(A.size()) + string(1, A[A.size()-1]);
    cout << ans << endl;
    return 0;
}
