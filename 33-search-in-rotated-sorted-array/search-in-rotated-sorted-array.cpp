class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n=nums.size();
    int mid;
    int start=0;
    int last=n-1;

    while(start<=last){
        mid=start+ (last-start)/2;

        if(nums[mid]==target){
            return mid;
        }

        if(nums[start]<=nums[mid]) // left sorted
        {
            if(target>=nums[start] && target<=nums[mid]){
                last=mid-1;
            }
                else{
                    start=mid+1;
                }
            }
        else{ // right sorted
            if(target>= nums[mid]&& target<=nums[last]){
                start=mid+1;
            }
                else{
                    last=mid-1;
                }
            }

        }
        return -1;    
    }
};