class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        
        int n=nums.size();
        int maxele=INT_MIN;

        vector<int>prefixGcd(n);

        for(int i=0; i<n ; i++){

            maxele=max(maxele,nums[i]);
            prefixGcd[i]= gcd(nums[i], maxele); 
            
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        int start=0;
        int last=n-1;
        long long sum=0;

        while(start<last){
            
            sum+=gcd(prefixGcd[start],prefixGcd[last]);

            start++;
            last--;

        }

        return sum;

    }
};