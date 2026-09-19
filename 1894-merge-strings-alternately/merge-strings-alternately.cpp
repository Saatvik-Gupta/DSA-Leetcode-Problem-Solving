class Solution {
public:
    string mergeAlternately(string s1, string s2) {

        
        int m=s1.length();
        int n=s2.length();

        string ans="";
        int idx=0;
        
        while(idx<m && idx<n){
            ans+=s1[idx];
            ans+=s2[idx];
            idx++;

        }

        // Add Remaining characters of string

        while(idx<m){
            ans+=s1[idx];
            idx++;
        }

        while(idx<n){
            ans+=s2[idx];
            idx++;
        }

        return ans;
        
    }
};