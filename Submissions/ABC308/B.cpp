#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, M;
    cin >> N >> M;
    vector<string> C(N);
    for(int i=0; i<N; ++i) cin >> C[i];
    
    map<string, int> price;
    vector<string> D(M);
    for(int i=0; i<M; ++i) cin >> D[i];
    
    int P0;
    cin >> P0;
    for(int i=0; i<M; ++i) {
        int Pi;
        cin >> Pi;
        price[D[i]] = Pi;
    }
    
    int total = 0;
    for(int i=0; i<N; ++i) {
        if(price.count(C[i]) == 0) total += P0;
        else total += price[C[i]];
    }
    
    cout << total << endl;
    
    return 0;
}
