class Solution {
public:
    bool checkIfPangram(string sentence) {

        vector<bool>store(26,false);

        for(char val:sentence){
            store[val-'a']=true;
        }

        for(bool val:store){
            if(val==false) return false;
        }

        return true;
        
    }
};