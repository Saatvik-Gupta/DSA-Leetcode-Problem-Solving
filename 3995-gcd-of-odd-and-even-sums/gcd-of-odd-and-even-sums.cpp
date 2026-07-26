class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        int sumodd=0;
        int sumeven=0;

        for(int i=1; i<=n; i++){
            sumodd+=(2*i)-1;

            sumeven+= 2*i;
        }

         while(sumodd>0 && sumeven>0){
            if(sumodd>sumeven){
                sumodd=sumodd%sumeven;
            }
            else{
                sumeven=sumeven%sumodd;
            }
        }
        if(sumodd==0) return sumeven;
        return sumodd;
        
    }

};