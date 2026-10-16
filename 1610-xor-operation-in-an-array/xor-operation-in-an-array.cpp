class Solution {
public:
    int xorOperation(int n, int start) {

        vector<int>nums(n);

        for(int i=0; i<n;i++){

            nums[i]=start+ 2*i;
        }
    int store=0;
        for(int val: nums){

            store^=val;
        }
        return store;
    }
};