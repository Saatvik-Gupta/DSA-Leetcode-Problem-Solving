class Solution {
public:

    set<vector<int>>s;

    void getcombo(vector<int>& arr,vector<int>& combo,vector<vector<int>>& ans,int target,int i){

        int n=arr.size();

        if(target==0){

            if(s.find(combo)==s.end()){
            ans.push_back({combo});
            s.insert(combo);
        }
        return;
        }

        if(target<0 || i==n) return;

        combo.push_back(arr[i]); // inclusion 

        // single
        getcombo(arr,combo,ans,target-arr[i], i+1);

        // multiple inclusion
        getcombo(arr,combo,ans,target-arr[i], i);

        //backtrack
        combo.pop_back();

        // exclude
        getcombo(arr,combo,ans,target, i+1);

    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int>combo;
        vector<vector<int>>ans;

        getcombo(arr,combo,ans,target,0);

        return ans;
        
    }
};