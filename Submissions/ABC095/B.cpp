#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, X;
    cin >> N >> X;
    vector<int> m(N);
    for(int i = 0; i < N; i++) {
        cin >> m[i];
    }
 
    for(int i = 0; i < N; i++) {
        X -= m[i];
    }
 
    sort(m.begin(), m.end());
    int count = N + X / m[0];
 
    cout << count << endl;
 
    return 0;
}