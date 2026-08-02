class Solution {
public:

    long long max(long long a,long long b){
        return a>b?a:b;
    }
    long long maxPairStrength(vector<int>& nums) {

        int n=nums.size();
        long long ans=INT_MIN;

        for(int i=0;i<n; i++){
            for(int j=i+1; j<n; j++){

                long long pro=1LL* nums[i]*nums[j];
                long long cal=1LL*  gcd(nums[i],nums[j]);

                ans=max(ans, pro/(cal*cal));

            }
        }
        return ans;
    }
};