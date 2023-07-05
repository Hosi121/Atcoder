#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string A, B;
    cin >> A >> B;
 
    if(A.size() != B.size()){
        cout << (A.size() < B.size() ? "LESS" : "GREATER") << endl;
    }else{
        cout << (A==B ? "EQUAL" : (A<B ? "LESS" : "GREATER")) << endl;
    }
 
    return 0;
}