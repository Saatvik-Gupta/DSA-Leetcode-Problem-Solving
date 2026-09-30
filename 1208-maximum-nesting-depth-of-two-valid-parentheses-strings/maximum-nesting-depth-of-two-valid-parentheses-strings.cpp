class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        
        vector<int>ans;
        int digits=0;

        for (char ch:seq){

            if(ch=='('){ digits++;
            ans.push_back(digits % 2);
            }

            else if(ch==')'){
                ans.push_back(digits%2);
                digits--;
            }
        }

        return ans;
    }
};