class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
    
    int row=arr.size();
    int col=arr[0].size();
    int low=0;
    int high=row-1;

    while(low<=high){ // O(log m)
        int midrow= low + (high-low)/2;

        if(target>= arr[midrow][0] && target<= arr[midrow][col-1]){ // row found where element exists

            // Binary search again to find target at that particular row-->midrow

            int start=0;
            int end=col-1;

            while(start<=end){ // O(log n)
                int midele= start + (end-start)/2;

                if(target== arr[midrow][midele]){
                    return true;
                }
                else if (target> arr[midrow][midele]){
                    start=midele+1;
                }
                else end=midele-1;
            }
            return false;
        }

        else if(target>arr[midrow][col-1]){
            low=midrow+1;
        }
        else high=midrow-1;

    }
        return false;
        
    }
};