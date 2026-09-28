class Solution {
public:
    int maxDepth(string s) {

        int ans=0;
        int count=0;

        for(char val:s){
            if(val=='(') count++;

            else if(val==')') count--;

            ans=max(ans,count);
        }

        return ans;
        
    }
};