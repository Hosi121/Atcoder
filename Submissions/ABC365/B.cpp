#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> P;
typedef vector<P> vP;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

int main() {
    int N;
    cin >> N;
    vi A(N);
    vP ans(N);
    rep(i, N) {
        cin >> A[i];
        ans[i] = {A[i], i + 1};
    }
  
    sort(ans.rbegin(), ans.rend());
    cout << ans[1].second << endl;
}

