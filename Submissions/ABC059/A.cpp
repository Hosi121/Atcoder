#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string a, b, c;
    cin >> a >> b >> c;
    string ans = a.substr(0,1) + b.substr(0,1) + c.substr(0,1);
 
    transform(ans.begin(), ans.end(), ans.begin(), ::toupper);
 
    cout << ans << endl;
 
    return 0;
}