class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n= arr.size();
        int start=1;
        int last=n-2;// as last value can't be a peak value
        
        while(start<=last){

            int mid= start + (last-start)/2;
            if( (arr[mid]> arr[mid+1]) && (arr[mid]> arr[mid-1]))
            {
                return mid;
            }

            else if(arr[mid]> arr[mid-1]) // right search
            {
                start= mid+1;
            }
            else{
                last=mid-1;
            }
        }
        return -1;
    }
};