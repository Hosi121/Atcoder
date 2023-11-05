#include <iostream>
#include <unordered_map>
#include <cmath>

using namespace std;

int main() {
    unordered_map<long long, int> powerMap = {
        {1LL, 1},
        {4LL, 2},
        {27LL, 3},
        {256LL, 4},
        {3125LL, 5},
        {46656LL, 6},
        {823543LL, 7},
        {16777216LL, 8},
        {387420489LL, 9},
        {10000000000LL, 10},
        {285311670611LL, 11},
        {8916100448256LL, 12},
        {302875106592253LL, 13},
        {11112006825558016LL, 14},
        {437893890380859375LL, 15}
    };

    long long B;
    cin >> B;

    auto it = powerMap.find(B);
    if (it != powerMap.end()) {
        cout << it->second << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
