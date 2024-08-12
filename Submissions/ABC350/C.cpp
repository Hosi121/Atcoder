#include <bits/stdc++.h>
using namespace std;

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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vi A(N);
    rep(i, N) cin >> A[i];

    vector<P> operations;

    rep(i, N) {
        while (A[i] != i + 1) {
            int correct_pos = A[i] - 1;
            operations.push_back({i + 1, correct_pos + 1});
            swap(A[i], A[correct_pos]);
        }
    }

    cout << operations.size() << "\n"; 
    for (auto& op : operations) {
        cout << op.first << " " << op.second << "\n";
    }

    return 0;
}

