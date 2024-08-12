#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> P;

int main() {
    int Y;
    cin >> Y;
    
    int ans = (Y % 400 == 0) ? 366 : 
              (Y % 100 == 0) ? 365 : 
              (Y % 4 == 0) ? 366 : 365;
    
    cout << ans << endl;
}
