class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {

        int m=arr.size();
        int n= arr[0].size();
        int srow=0,erow=m-1,scol=0,ecol=n-1;
        vector<int>ans;

        while( (srow<=erow) && (scol<=ecol) ){

            // top-->first row fix-column traverse
            for( int j=scol; j<=ecol; j++){
                ans.push_back(arr[srow][j]);
            }

            // right--> last column fix-row traverse
            for( int i=srow + 1; i<=erow; i++){
                ans.push_back(arr[i][ecol]);
            }

            // bottom--> last row fix-column traverse
            for( int j=ecol-1; j>=scol; j--){

                if(srow==erow){ // avoid duplicacy
                    break;
                }
                ans.push_back(arr[erow][j]);
            }

            // left--> first column fix-row traverse
            for( int i=erow-1; i>=srow + 1; i--){

                if(scol==ecol){ // avoid duplicacy
                    break;
                }
                ans.push_back(arr[i][scol]);
            }

            srow++;scol++;erow--;ecol--;
        }

        return ans;
    }
};