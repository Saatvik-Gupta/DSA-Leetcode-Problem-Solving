class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n=grid.size();
        unordered_set<int>s;
        int a,b;

        vector<int>ans;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){

            if(s.find(grid[i][j])!=s.end()){

                a=grid[i][j];
                ans.push_back(a); // a found i.e repeating value
                break;
            }
            s.insert(grid[i][j]);
            }
        }

        int total_sum= ((n*n) * (n*n+1))/2;
        int arr_sum=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                arr_sum+=grid[i][j];
                }
        }

        b=total_sum - arr_sum + a;
        ans.push_back(b);

        return ans;

    }
};