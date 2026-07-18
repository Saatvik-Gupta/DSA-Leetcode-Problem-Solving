class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {

        int n=arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());

        for(int i=0; i<n; i++){

            if(i>0 && arr[i]==arr[i-1]) continue;

            int p=i+1;
            int q=n-1;
            while(p<q){
                long long sum=1LL* ( arr[i]+arr[p]+arr[q] );
                if(sum==0){
                    ans.push_back({arr[i],arr[p],arr[q]});
                    p++;q--;

                    while(p<q && arr[p]==arr[p-1]) p++;
                    while(p<q && arr[q]==arr[q+1]) q--;
                }

                else if(sum<0) p++;
                else q--;
            }
        }
        return ans;
        
    }
};