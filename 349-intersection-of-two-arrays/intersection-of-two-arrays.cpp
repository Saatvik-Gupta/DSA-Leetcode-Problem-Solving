class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        set<int>s1;
        set<int>s2;
        vector<int>result;

        for(int i : nums1) s1.insert(i);

        for( int j : nums2) s2.insert(j);

        for( int c : s1){

            if ( s2.contains(c)) result.push_back(c);
        }

        return result;
        
    }
};