#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, D, X;
    cin >> N >> D >> X;
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
 
    int total = 0;
    for(int i = 0; i < N; i++) {
        total += (D - 1) / A[i] + 1;
    }
 
    cout << total + X << endl;
 
    return 0;
}