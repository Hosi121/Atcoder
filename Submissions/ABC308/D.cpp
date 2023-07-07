#include<bits/stdc++.h>
using namespace std;
 
const int dx[] = {0, 1, 0, -1};
const int dy[] = {1, 0, -1, 0};
const char snuke[] = "snuke";
 
int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for(int i = 0; i < H; i++) {
        cin >> S[i];
    }
 
    vector<vector<vector<bool>>> visited(H, vector<vector<bool>>(W, vector<bool>(5, false)));
    queue<tuple<int, int, int>> q;
 
    if(S[0][0] == 's') {
        q.push(make_tuple(0, 0, 0));
        visited[0][0][0] = true;
    }
 
    while(!q.empty()) {
        auto [x, y, idx] = q.front();
        q.pop();
 
        if(x == H - 1 && y == W - 1) {
            cout << "Yes" << endl;
            return 0;
        }
 
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            int nidx = (idx + 1) % 5;
 
            if(nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
            if(S[nx][ny] != snuke[nidx]) continue;
            if(visited[nx][ny][nidx]) continue;
 
            visited[nx][ny][nidx] = true;
            q.push(make_tuple(nx, ny, nidx));
        }
    }
 
    cout << "No" << endl;
    return 0;
}