class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        vector<int>vec;
        int n=arr.size();
        unordered_map<int,int>m;

        for( int i=0; i<n; i++){
            int first=arr[i];
            int second=target-first;

             if( m.find(second) !=m.end()){
                vec.push_back(i);
                vec.push_back(m[second]);
                break;
             }

             m[first]=i; // map ith index value placed 

        }

            return vec;
    }
};