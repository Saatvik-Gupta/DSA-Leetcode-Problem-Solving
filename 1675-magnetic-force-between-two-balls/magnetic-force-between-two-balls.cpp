class Solution {
public:

    bool isvalid(vector<int>& arr,int n,int m,int mid){

        int balls=1;
        int forcearea=arr[0];

        for(int i=1;i<n;i++){
            if(arr[i]-forcearea>=mid){
                balls++;
                forcearea=arr[i];
            }
            if(balls==m) return true;
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        // problem like aggresive cows

        sort(position.begin(),position.end());
        int n=position.size();
        int start=1;
        int last=position[n-1] - position[0];
        int ans=0;

        while(start<=last){
            int mid= start + (last-start)/2;
            if(isvalid(position,n,m,mid)){

                ans=mid;
                start=mid+1;
            }
            else{
                last=mid-1;
            }
        }
        return ans;
        
    }
};