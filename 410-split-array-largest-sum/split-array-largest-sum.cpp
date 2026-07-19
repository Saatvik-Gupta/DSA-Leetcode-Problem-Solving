class Solution {
public:

    bool isValid(vector<int>arr,int n,int m,int maxallocation){

        int painters=1;
        int time=0;

        for(int i=0; i<n; i++){
            if(arr[i]>maxallocation){
                return false;
            }

            if(arr[i]+time<=maxallocation){
                time+=arr[i];
            }
            else{
                painters++;
                time=arr[i];
            }
        }

        return (painters>m)?false:true;
    }

    int splitArray(vector<int>& nums, int k) {

        int n=nums.size();
        int start=0;
        int sum=0;

        for(int i=0; i<n; i++){

            sum+= nums[i];
        }

        int last=sum;
        int ans=0;

        if(n<k){
            return -1;
        }

        while(start<=last){
            int mid= start + (last-start)/2;

            if(isValid(nums,n,k,mid)){
                ans=mid;
                last=mid-1;
            }

            else{
                start=mid+1;
            }
        }
        
        return ans;
    }
};