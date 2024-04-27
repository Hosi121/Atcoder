#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef pair<int, int> P;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()

int main() {
    int n, m, l, q;
    cin >> n;
    vll a(n);
    rep(i, n) cin >> a[i];
    cin >> m;
    vll b(m);
    rep(i, m) cin >> b[i];
    cin >> l;
    vll c(l);
    rep(i, l) cin >> c[i];
    cin >> q;
    vll x(q);
    rep(i, q) cin >> x[i];

    // AとBのすべての和の組み合わせを計算しておく
    set<ll> ab_sums;
    for (auto ai : a) {
        for (auto bi : b) {
            ab_sums.insert(ai + bi);
        }
    }

    // 各X[i]に対して、A+Bの和とCから一つ選んだ数の和がX[i]になるかチェック
    rep(i, q) {
        bool can = false;
        for (auto ci : c) {
            // X[i] - C[i]がA+Bの和に含まれているかチェック
            if (ab_sums.find(x[i] - ci) != ab_sums.end()) {
                can = true;
                break;
            }
        }
        cout << (can ? "Yes" : "No") << endl;
    }
}

