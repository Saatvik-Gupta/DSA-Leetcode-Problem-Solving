class Solution {
public:
    int maximumLengthSubstring(string s) {

        int n=s.length();
        int maxi=0;
        int left=0;

        unordered_map<int,int>freq;

        for(int i=0; i<n ;i++){
            freq[s[i]]++;

            while(freq[s[i]]>2){
                freq[s[left]]--;
                left++;
            }

            maxi=max(maxi,i-left+1);
        }
        return maxi;
        
    }
};