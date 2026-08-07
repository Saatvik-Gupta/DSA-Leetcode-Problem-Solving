class Solution {
public:
    int findDuplicate(vector<int>& arr) {

        // slow-fast pointers concept
        // assumimg array as a linked list

        int n=arr.size();
        int slow=arr[0];
        int fast=arr[0];

        do{
            slow=arr[slow]; //+1
            fast=arr[arr[fast]]; //+2
        } while( slow!=fast);

        slow=arr[0];

        while( slow!=fast){
            slow=arr[slow]; //+1
            fast=arr[fast]; //+1
        }

        // now when all loops end slow=fast

        return slow; // or return fast
        
    }
};