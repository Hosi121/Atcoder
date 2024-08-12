#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int N;
    ll M;
    cin >> N >> M;
    vi A(N);
    rep(i, N) { cin >> A[i]; }

    ll left = 0, right = 1e9 + 1;
    while (left < right) {
        ll mid = left + (right - left) / 2;
        ll total = 0;
        rep(i, N) { total += min((ll)A[i], mid); }
        (total <= M) ? left = mid + 1 : right = mid;
    }

    ll ans = left - 1;
    ll total = 0;
    rep(i, N) { total += A[i]; }

    cout << (total <= M ? "infinite" : to_string(ans)) << endl;
}

