#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << ((A+B) == (C+D) ? "Balanced" : ((A+B) < (C+D) ? "Right" : "Left")) << endl;
    return 0;
}