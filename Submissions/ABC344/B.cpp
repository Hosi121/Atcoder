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
    vector<int> a;
    int x;
    // 終了条件が特定されていないので、EOFまで読み込む
    while (cin >> x) {
        a.push_back(x);
    }
    for(int i = a.size() - 1; i >= 0; i--) {
        cout << a[i] << endl;
    }
}
