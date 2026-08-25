class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      for(int j = 0 ; j < board.size() ; j++)
    {
        unordered_set<char> rows;

        for (int i = 0; i < board[j].size(); i++)
        {
            if (board[j][i] == '.')
                continue;

            if (rows.count(board[j][i]))
            {
                return false;
            }

            rows.insert(board[j][i]);
        }
    }

    for(int j = 0 ; j < board.size() ; j++)
    {
        unordered_set<char> column;

        for (int i = 0; i < board[j].size(); i++)
            {
                if (board[i][j] == '.')
                    continue;

            if (column.count(board[i][j]))
            {
                return false;
            }

            column.insert(board[i][j]);
            }
    }

    // the formula to get the first of the box :
vector<unordered_set<char>> boxes(9);
    for (int row = 0; row < 9; row++)
        {
            for (int col = 0; col < 9; col++)
            {
                if (board[row][col] == '.')
                    continue;

                int box = (row / 3) * 3 + (col / 3);

                if (boxes[box].count(board[row][col]))
                    return false;

                boxes[box].insert(board[row][col]);
            }
        }
    return true;
}
};
