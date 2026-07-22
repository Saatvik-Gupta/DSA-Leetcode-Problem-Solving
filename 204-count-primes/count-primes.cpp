class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        vector<bool>nums(n+1,true);
        nums[0]=nums[1]=false;

        // Apply Seive of erostosthenes algo
        for(int i=2;i<n;i++){
                if(nums[i]){
                    count++;
                    for(int j=i*2; j<n;j+=i)
                    nums[j]=false;
                }
            }

        return count;
    }
};