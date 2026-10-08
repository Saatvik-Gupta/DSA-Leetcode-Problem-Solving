class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans = "";
        int count1 = 0;  // '('
        int count2 = 0;  // ')'

        for(char c : s) {

            if(c == '(') {
                count1++;

                // If opening and closing counts are not equal,
                // this '(' is not the outermost one
                if(count1 > count2)
                    if(count1 - count2 > 1)
                        ans += c;
            }
            else {
                count2++;

                // Add ')' only if it is not the outermost ')'
                if(count1 - count2 > 0)
                    ans += c;
            }

            // A primitive parenthesis group is complete
            if(count1 == count2) {
                count1 = 0;
                count2 = 0;
            }
        }

        return ans;
    }
};