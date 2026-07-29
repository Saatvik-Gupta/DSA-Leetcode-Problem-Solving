class Solution {
public:

    int lengthOfLastWord(string s) {

        int n=s.length();
        int ans=INT_MIN;
        for(int i=0; i<n; i++){

            string word="";
        while(i<n && s[i]!=' '){ // extracting each word

            word+=s[i];
            i++;
        }

        if(word.length()>0){
        ans=word.length();
        }

    }

        return ans;
        
    }
};