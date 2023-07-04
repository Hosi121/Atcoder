#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    double ans = 0;
    for (int i = 1; i <= N; ++i) {
        ans += i * 10000.0 / N;
    }
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}