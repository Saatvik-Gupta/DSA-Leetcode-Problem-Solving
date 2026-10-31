class Solution {
public:
    string replaceDigits(string s) {
        int n=s.length();

        for(int i=1; i<=n; i+=2){ // digits in odd indices 1,3,5,7...

            s[i]+=s[i-1] - '0';  // '1'+= 'a'-'0' i.e 97-48+49=98---> 'b'
            /*'0' - 48
                '1' - 49
                '2' - 50
                '3' - 51
                '4' - 52...*/
        }

        return s;
                
    }
};