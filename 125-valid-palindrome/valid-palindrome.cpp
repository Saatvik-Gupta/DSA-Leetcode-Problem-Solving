class Solution {
public:
    bool isPalindrome(string s) {

        int start=0;
        int end=s.length()-1;
        while(start<end){

            if(!isalnum(tolower(s[start]))){
                start++;
                continue;
            }
            
            if(!isalnum(tolower(s[end]))){
                end--;
                continue;
            }

            if(tolower(s[start])!=tolower(s[end])) return false;

            start++;end--;
        }

        return true;
        
    }
};