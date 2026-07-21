class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int>merge(m+n);

        // for nums 1 size=m
        for(int i=0; i<m; i++){
            merge[i]=nums1[i];
        }

        // for nums 2 size=n
        for(int i=0; i<n; i++){
            merge[i+m]=nums2[i];
        }

        sort(merge.begin(), merge.end());
        
        // distribute m+n elements to nums1
         for(int i=0; i<m+n; i++){
            nums1[i]=merge[i];
        }

        
    }
};