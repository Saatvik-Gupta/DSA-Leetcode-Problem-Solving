class Solution {
public:
    int minimumPushes(string word) {

        vector<int>freq(26,0);

        for( char ch: word){
            freq[ch-'a']++;
        }

        sort(freq.rbegin(), freq.rend());
        int res=0;

        for(int i=0; i<26; i++){
            res+= (i/8+ 1) * freq[i];
        }

        return res;
        
    }
};