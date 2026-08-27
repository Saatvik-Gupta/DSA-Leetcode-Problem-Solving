class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int length=flowerbed.size();

        if(n==0) return true;

        if(length==1){
            bool check= flowerbed[0]==0 && n==1;
            return check;
        }

        int count=0;

        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]=1;
            count++;
        }
        
        if(flowerbed[length-1]==0 && flowerbed[length-2]==0){
            flowerbed[length-1]=1;
            count++;
        }

        for( int i=1; i<length-1; i++){
            if(flowerbed[i]==1) continue;

            if( flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                count++;
            }
        }

        return count>=n;
        
    }
};