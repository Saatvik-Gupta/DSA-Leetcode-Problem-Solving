class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(string s:sentences){

            int word=1;

            for(char v:s){
                if(v ==' ') word++;
            }

            ans=max(word,ans);

        }
        return ans;
    }
};