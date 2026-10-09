class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int n=mat.size();

        int sum=0;

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                if(i==j) sum+=mat[i][j];

                else if(j==n-1-i) sum+=mat[i][j]; // not counted twice in case of odd size matrix as if else if ladder

            }
        }
        return sum;
    }
};