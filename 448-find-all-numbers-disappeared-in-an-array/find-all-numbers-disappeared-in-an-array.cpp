class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int>li;

        for(int i=0; i<nums.size(); i++){ // taking ex:[4,3,2,7,8,2,3,1]
            int index=abs(nums[i]); // 4

            nums[index-1]=-abs(nums[index-1]);

        }

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                li.push_back(i+1);
            }
        }
        return li;
        
    }
};