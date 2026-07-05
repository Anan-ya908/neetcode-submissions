class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        
        
        
        for(int i=0;i<9;i++){
            unordered_set<char> r;
            for(char x:board[i]){
                if(x=='.')
                continue;
                else if(r.find(x)!=r.end())
                return false;
                else
                r.insert(x);
            }
            
        }
for (int j = 0; j < 9; j++) {

    unordered_set<char> c;

    for (int i = 0; i < 9; i++) {

        char x = board[i][j];

        if (x == '.')
            continue;

        if (c.count(x))
            return false;

        c.insert(x);
    }
}
for (int row = 0; row < 9; row += 3) {
    for (int col = 0; col < 9; col += 3) {

        unordered_set<char> box;

        for (int i = row; i < row + 3; i++) {
            for (int j = col; j < col + 3; j++) {

                char x = board[i][j];

                if (x == '.') continue;
                if (box.count(x)) return false;

                box.insert(x);
            }
        }
    }
}
        
     return true;   
    }
};
