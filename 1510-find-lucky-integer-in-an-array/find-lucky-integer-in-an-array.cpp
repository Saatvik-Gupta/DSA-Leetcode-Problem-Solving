class Solution {
public:
    int findLucky(vector<int>& arr) {

        vector<int>count(501,0);
        int ans=-1;

        for(int val:arr){
            count[val]++;
        }

        for(int i=1;i<501;i++){

            if(count[i]==i){
                ans=max(ans,i);
            }
        }

        return ans;

        
    }
};