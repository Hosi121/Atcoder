#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> powers = {1, 4, 8, 9, 16, 25, 27, 32, 49, 64, 81, 100, 121, 125, 128, 144, 169, 196, 225, 243, 256, 289, 324, 343, 361, 400, 441, 484, 512, 529, 576, 625, 676, 729, 784, 841, 900, 961, 1000};
    
    int n;
    cin >> n;

    int ans = 1;
    for (int power : powers) {
        if (power <= n) {
            ans = max(ans, power);
        }
    }
    cout << ans << endl;

    return 0;
}