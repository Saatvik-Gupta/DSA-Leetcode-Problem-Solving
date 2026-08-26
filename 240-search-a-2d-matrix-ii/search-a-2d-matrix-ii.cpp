class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {

        int m=arr.size();
        int n=arr[0].size();

        int row=0;
        int col=n-1;

        while( (row< m) && (col>=0) ){

            if(target== arr[row][col]){
                return true;
            }

            else if(target< arr[row][col]){
                col--;
            }
            else row++;
        }
        return false;
        
        
    }
};