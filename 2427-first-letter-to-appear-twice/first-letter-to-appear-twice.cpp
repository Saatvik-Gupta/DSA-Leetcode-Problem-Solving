class Solution {
public:
    char repeatedCharacter(string s) {

        vector<bool>visited(26,false);

        for( char c : s){
            int index= c-'a';

            if(visited[index]) return c;

            visited[index]=c;
        }
        return ' ';
        
    }
};