#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++)
        cin >> A[i];
    bool isSame = true;
    for(int i = 1; i < N; i++) {
        if(A[0] != A[i]) {
            isSame = false;
            break;
        }
    }
    if (isSame)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}