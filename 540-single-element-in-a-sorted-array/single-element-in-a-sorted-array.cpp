class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n= nums.size();
        int start=0;
        int last=n-1;

        if(n==1) // single element size array
        {
            return nums[0];
        }

        if( nums[0]!=nums[1])
        {
            return nums[0];
        }

        if( nums[n-1]!= nums[n-2]){
            return nums[n-1];
        }

        
        while(start<=last){

            int mid= start + (last-start)/2;
            if( (nums[mid]!= nums[mid+1]) && (nums[mid]!= nums[mid-1])){
                return nums[mid];
            }

            if(mid%2==0){ // even sized elements to the left and right of mid

            if(nums[mid]==nums[mid-1]) // left side search
            {
                last= mid-1;
            }
            else{ // right side search
                start=mid+1;
            }
        }

            else{ 

            // (mid%2!=0){ // odd sized elements to the left and right of mid
            if(nums[mid]==nums[mid-1]) // right side search
            {
                start=mid+1;
            }
            else{ // left side search
                last=mid-1;
            }

        }
    }
        return -1;
    }
};