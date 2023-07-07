#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int total = 0;
    for(int i = 0; i < N; i++) {
        int l, r;
        cin >> l >> r;
        total += r - l + 1;
    }

    cout << total << endl;

    return 0;
}
