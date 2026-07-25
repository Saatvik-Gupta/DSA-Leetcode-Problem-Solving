class Solution {
public:
    int maxProduct(int n) {

        vector<int> digits;

        while(n>0){
            int dig=n%10;

            digits.push_back(dig);
            n=n/10;
        }

        int ans=0;
        int num=digits.size();

        for(int i=0;i<num;i++){
            for(int j=i+1; j<num;j++){

                int pro=digits[i]*digits[j];
                ans=max(ans,pro);
            }
        }

    return ans;
        
    }
};