#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> A(M);
    for(int i = 0; i < M; i++) {
        cin >> A[i];
    }
 
    int cost0 = 0, costN = 0;
    for(int i = 0; i < M; i++) {
        if(A[i] < X) {
            cost0++;
        } else {
            costN++;
        }
    }
 
    cout << min(cost0, costN) << endl;
 
    return 0;
}