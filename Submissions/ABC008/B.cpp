#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    map<string, int> votes;
    for (int i = 0; i < N; ++i) {
        string S;
        cin >> S;
        ++votes[S];
    }
    string max_candidate;
    int max_votes = 0;
    for (const auto& [candidate, vote] : votes) {
        if (vote > max_votes) {
            max_votes = vote;
            max_candidate = candidate;
        }
    }
    cout << max_candidate << endl;
    return 0;
}