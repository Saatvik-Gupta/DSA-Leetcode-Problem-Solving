class Solution {
public:

    int count_bits(int val){
        int count=0;
        while(val>0){

            count+= (val & 1); // last bit check wheather 1 or not
            val=val>>1; // right shift by 1 bit means /2

        }


        return count;
    }

    vector<int> countBits(int n) {

        vector<int>ans(n+1);

        for(int i=0;i<=n; i++){
            ans[i]=count_bits(i);
        }

        return ans;
        
    }
};