class Solution {
public:

    bool isvalid(vector<vector<char>>& board,int row,int col,char dig){
        // horizantal

        for(int j=0;j<9; j++){
            if(board[row][j]==dig) 
            return false;
        }

        // vertical
        for(int i=0;i<9;i++){
            if(board[i][col]==dig)
                return false;
        }

        // grid existance
        int sr= (row/3)*3;
        int sc= (col/3)*3;
        for(int i=sr; i<=sr+2; i++){
            for(int j=sc;j<=sc+2; j++){

                if(board[i][j]==dig) return false;
            }
        }

        return true;
    }


    bool sudoko(vector<vector<char>>& board,int row,int col){

        if (row==9) return true; // base condition

        int newr=row;
        int newc=col+1;
        if(newc==9){
            newr=row+1;
            newc=0;
        }

        if(board[row][col] != '.') // element exist or not
        return sudoko(board, newr, newc);

        for(char dig='1'; dig<='9'; dig++){

        if(isvalid(board,row,col,dig)){

        
         board[row][col]=dig;

        if(sudoko(board,newr,newc)) return true;

        board[row][col]='.'; // backtrack
    }
        }
    return false;
}

    void solveSudoku(vector<vector<char>>& board) {

        sudoko(board,0,0);
        
    }
};