class Solution {
public:

    bool check(vector<vector<int>>& grid,int row,int col,int n,int expval){

        if(row<0 || col<0 || row>=n || col>=n || grid[row][col]!=expval){
            return false;
        }
        
        if(expval==(n*n -1)) return true;

        bool ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8;

        ans1= check(grid,row-2,col+1,n,expval+1);
        ans2= check(grid,row-1,col+2,n,expval+1);
        ans3= check(grid,row+1,col+2,n,expval+1);
        ans4= check(grid,row+2,col+1,n,expval+1);
        ans5= check(grid,row+2,col-1,n,expval+1);
        ans6= check(grid,row+1,col-2,n,expval+1);
        ans7= check(grid,row-1,col-2,n,expval+1);
        ans8= check(grid,row-2,col-1,n,expval+1);

        return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;

    }
    bool checkValidGrid(vector<vector<int>>& grid) {

        int n=grid.size();
        bool store=check(grid,0,0,n,0);

        return store;
        
    }
};