#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int ans = 0;
    int j = 0;
    for (int i = 0; i < N; ++i) {
        while (j < N && A[j] < A[i] + M) ++j;
        ans = max(ans, j - i);
    }

    cout << ans << endl;
}
