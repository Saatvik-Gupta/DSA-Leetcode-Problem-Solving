class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int openpare=0;
        int closepare=0;

        for(char c:s){

            if(c=='(') openpare++;

            else if(c==')' && openpare>0) openpare--;

            else closepare++;

        }

        return (openpare+closepare);
    }
};