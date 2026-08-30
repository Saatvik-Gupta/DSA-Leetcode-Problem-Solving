class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        vector<bool>isjewel(128,false);
        int count=0;

        for( char c: jewels) isjewel[c]=true;

        for( char c : stones){
            if(isjewel[c]) count++;
        }

        return count;
    }
};