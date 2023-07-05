#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string N;
    cin >> N;
    cout << (N.substr(0, 1) == N.substr(2, 1) ? "Yes" : "No") << endl;
    return 0;
}