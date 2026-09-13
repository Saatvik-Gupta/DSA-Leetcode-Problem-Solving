class Solution {
public:
    string removeDuplicates(string s) {

        stack<char> ans;

        for(char val : s) {

            if(!ans.empty() && ans.top() == val) {
                ans.pop();
            }
            else {
                ans.push(val);
            }
        }

        string result = "";

        while(!ans.empty()) {
            result += ans.top();
            ans.pop();
        }

        reverse(result.begin(), result.end());

        return result;
    }
};