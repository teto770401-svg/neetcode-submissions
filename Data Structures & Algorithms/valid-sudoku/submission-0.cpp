class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        /*
        (a, b)[a][b] point
         row a
         col b
         (a/3, b/3) subsquare
        */

        vector<vector<bool>> dict(27, vector<bool>(9, false)); //0-8 row 9-17 col 18-26 subsquare 00 10 20 01 11 ..
        //row
        for(int i = 0; i < 9; ++i){
            for(int j = 0; j < 9; ++j){
                if(board[i][j] == '.'){
                    continue;
                }

                int num = board[i][j] - '1';
                int row = i;
                int col = 9+j;
                int subsquare = 18 + (i / 3) * 3 + (j / 3);

                if(dict[row][num] || dict[col][num] || dict[subsquare][num]){
                    return false;
                }
                else{
                    dict[row][num] = true;
                    dict[col][num] = true;
                    dict[subsquare][num] = true;
                }
             }
        }
        return true;
    }
};
