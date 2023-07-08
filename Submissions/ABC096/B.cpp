#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;
    int max_val = max({A, B, C});
    int sum = A + B + C;

    for(int i = 0; i < K; i++) {
        sum += max_val;
        max_val *= 2;
    }

    cout << sum << endl;

    return 0;
}
