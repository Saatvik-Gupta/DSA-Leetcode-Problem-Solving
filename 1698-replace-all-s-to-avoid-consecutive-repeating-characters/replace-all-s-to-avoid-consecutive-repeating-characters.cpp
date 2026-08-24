class Solution {
public:
    string modifyString(string s) {

        int n = s.length();

        for(int i = 0; i < n; i++) {

            if(s[i] == '?') {

                for(char ch = 'a'; ch <= 'z'; ch++) {

                    char prev = (i > 0) ? s[i - 1] : '#';
                    char next = (i < n - 1) ? s[i + 1] : '#';

                    if(ch != prev && ch != next) {
                        s[i] = ch;
                        break;
                    }
                }
            }
        }

        return s;
    }
};