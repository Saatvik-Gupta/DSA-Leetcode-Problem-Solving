class Solution {
public:
    string reverseWords(string s) {

        
    int n=s.length();
    // first of all reverse the string and then extract words
    // then on words reverse them and add to ans

    string ans="";

    reverse(s.begin(),s.end());

    for(int i=0; i<n;i++){

        string word="";

        while(i<n && s[i]!=' '){ // words extraction
            word+=s[i];
            i++;
        }

        reverse(word.begin(),word.end());

        if(word.length()>0){
            ans+=" "+ word;
        }
    }

    return ans.substr(1);
        
    }
};