class Solution {
public:

    bool isvalid(vector<string>& board,int n,int row,int col){
        // Checking horizontal
        for(int j=0; j<n;j++){
            if(board[row][j]=='Q') return false;
        }

        // checking vertical
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q') return false;
        }

        // left diagaonal
        for(int i=row,j=col; i>=0 && j>=0; i--,j--){
            if(board[i][j]=='Q') return false;
        }

        // Right diagaonal
        for(int i=row,j=col; i>=0 && j<n; i--,j++){
            if(board[i][j]=='Q') return false;
        }

        return true;
    }

    void nQueens(vector<string>& board,int n,int row,vector<vector<string>>& ans){
        if(row==n){ // base case
            ans.push_back({board});
            return;
        }

        for(int j=0; j<n; j++){
            if(isvalid(board,n,row,j)){
                board[row][j]='Q';
                nQueens(board,n,row+1,ans);
                board[row][j]='.'; // backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<string>board(n,string(n,'.'));
        vector<vector<string>> ans;
        nQueens(board,n,0,ans);

        return ans;
    }
};