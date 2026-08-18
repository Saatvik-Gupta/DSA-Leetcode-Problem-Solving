class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {

        int n= arr.size();

        if(n<3){
            return false;
        }

        if(n>=3){ // minimum 3 elements

        for(int i=2;i<n; i++){
            if( (arr[i]%2!=0) && (arr[i-1]%2!=0) && (arr[i-2]%2!=0) ){
                return true;
            }
        }
        }
        return false;
        
    }
};