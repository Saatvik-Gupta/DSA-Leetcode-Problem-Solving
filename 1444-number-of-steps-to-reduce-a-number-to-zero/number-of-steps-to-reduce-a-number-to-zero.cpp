class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;

        while(num>0){

            if(num%2==0){
                 // even
                 count++;
                 num/=2;
            }

            else // odd
            {
                num--;
                count++;
            }
        }

        return count;
        
    }
};