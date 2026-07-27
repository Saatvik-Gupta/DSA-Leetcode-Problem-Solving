class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int pro=INT_MIN;

        int n=nums.size();
        for(int i=0;i<n;i++){

            for(int j=i+1;j<n;j++){
                int cal=(nums[i]-1)*(nums[j]-1);
                pro=max(pro,cal);
            }
        }

        return pro;
    }
};