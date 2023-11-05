#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<int>>& board) {
    vector<bitset<9>> rows(9), cols(9), blocks(9);
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            int val = board[i][j] - 1;
            int blockIdx = (i / 3) * 3 + j / 3;
            if (rows[i][val] || cols[j][val] || blocks[blockIdx][val]) {
                return false;
            }
            rows[i].set(val);
            cols[j].set(val);
            blocks[blockIdx].set(val);
        }
    }
    return true;
}

int main() {
    vector<vector<int>> board(9, vector<int>(9));
    for (auto &row : board) {
        for (auto &val : row) {
            cin >> val;
        }
    }

    cout << (isValidSudoku(board) ? "Yes" : "No") << endl;
    return 0;
}
