#include<bits/stdc++.h>
using namespace std;
 
int main() {
    unordered_map<string, set<int>> sets;
    sets["A"] = {1, 3, 5, 7, 8, 10, 12};
    sets["B"] = {4, 6, 9, 11};
    sets["C"] = {2};
 
    int x, y;
    cin >> x >> y;
 
    string answer = "No";
    for (const auto& s : sets) {
        if (s.second.count(x) && s.second.count(y)) {
            answer = "Yes";
            break;
        }
    }
 
    cout << answer << "\n";
 
    return 0;
}