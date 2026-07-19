
class Solution {
public:

    void reverse(vector<int>& arr,int start,int last){
        while(start<last){
            swap(arr[start],arr[last]);
            start++;
            last--;
        }
    }

    void nextPermutation(vector<int>& arr) {

        int n=arr.size();
        int pivot=-1;
        
        // finding pivot element first 

        for(int i=n-2;i>=0;i--){
            if( arr[i]< arr[i+1]){
                pivot=i;
                break;
            }
        }

        // if pivot exits check for the first greater number to the right of pivot
        if(pivot!=-1){

            for( int i=n-1; i>pivot; i--){
                if(arr[pivot]<arr[i]){
                    swap(arr[pivot], arr[i]);
                    break;
                }
            }

        }

        reverse(arr,pivot+1,n-1);
        
    }
};