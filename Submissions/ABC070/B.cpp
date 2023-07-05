#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int ans = min(B, D) - max(A, C);
    ans = max(ans, 0);
    cout << ans << endl;
 
    return 0;
}