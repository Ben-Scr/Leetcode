#pragma once
#include <vector>


namespace BenScr::IsValidSudoku {
    class Solution
    {
    public:
        bool isValidSudoku(std::vector<std::vector<char>>& board) {
            if (board.size() != 9) return false;
            for (const auto& row : board) {
                if (row.size() != 9) return false;
            }

            int rowMask[9] = { 0 };
            int colMask[9] = { 0 };
            int boxMask[9] = { 0 };

            for (int r = 0; r < 9; ++r) {
                for (int c = 0; c < 9; ++c) {
                    char ch = board[r][c];
                    if (ch == '.') continue;
                    if (ch < '1' || ch > '9') return false;

                    int d = ch - '1';
                    int bit = 1 << d;

                    int b = (r / 3) * 3 + (c / 3);

                    if (rowMask[r] & bit) return false;
                    if (colMask[c] & bit) return false;
                    if (boxMask[b] & bit) return false;

                    rowMask[r] |= bit;
                    colMask[c] |= bit;
                    boxMask[b] |= bit;
                }
            }
            return true;
        }
    };
}