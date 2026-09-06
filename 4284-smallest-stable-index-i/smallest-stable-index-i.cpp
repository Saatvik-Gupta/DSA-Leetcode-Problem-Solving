class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n=nums.size();
        vector<int>max_start(n);
        vector<int>min_last(n);

        max_start[0]=nums[0];
        min_last[n-1]=nums[n-1];

        // compute max from start

        for(int i=1;i<n;i++){
            max_start[i]=max(max_start[i-1],nums[i]);
        }

        // compute min form last

        for(int i=n-2; i>=0; i--){
            min_last[i]=min(min_last[i+1],nums[i]);
        }

        for(int i=0; i<n;i++){
            int score= max_start[i]- min_last[i];

            if(score<=k) return i;
        }
        
        return -1;
    }
};



