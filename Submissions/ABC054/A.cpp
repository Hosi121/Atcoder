#include<bits/stdc++.h>
using namespace std;
int main(){
    int A, B;
    cin >> A >> B;
    A = (A==1 ? 14 : A);
    B = (B==1 ? 14 : B);
    cout << (A==B ? "Draw" : (A > B ? "Alice" : "Bob")) << endl;
    return 0;
}