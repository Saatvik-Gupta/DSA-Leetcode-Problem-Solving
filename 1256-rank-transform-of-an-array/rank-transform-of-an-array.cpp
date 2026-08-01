class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        int n= arr.size();
        vector<int>ans;
        int rank=1;

        set<int>s;

        for(int val: arr){
            s.insert(val); // unique values in sorted order 10,20,30,40
        }

        unordered_map<int,int>m;

        for (int val: s){

            m[val]=rank;
            rank++;
        }

        for ( int value: arr){
            ans.push_back(m[value]);
        }

        return ans;
  
    }
};