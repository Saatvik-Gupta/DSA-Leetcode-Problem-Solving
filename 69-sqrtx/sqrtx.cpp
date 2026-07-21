class Solution {
public:
    int mySqrt(int x) {

        if(x==0 || x==1){
            return x;
        }

        // binary search
        int first=1; 
        int last= x/2; 

        while(first<=last){
            int mid= first+ (last-first)/2;

            if(mid > x/mid) 
            {
                last= mid-1;
            }
            else{
                first=mid+1; 
            }
        }

        return last;

    }


};