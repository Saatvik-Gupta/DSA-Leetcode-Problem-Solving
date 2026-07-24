class Solution {
public:

    bool ispali(string ele){
        string ele2=ele;

        reverse( ele2.begin(),ele2.end());

        return ele==ele2;
    }

    void palicheck(string s, vector<string>& store, vector<vector<string>>& ans){

        int n=s.length();
        if(n==0) {
            ans.push_back(store);
            return;
        }

        for(int i=0; i<n ; i++){
            string part=s.substr(0,i+1);

            if(ispali(part)){
                store.push_back(part);
                palicheck(s.substr(i+1),store,ans);
                store.pop_back(); // backtracking
            }
        }

    }

    vector<vector<string>> partition(string s) {

        vector<string> store;
        vector<vector<string>> ans;
        palicheck( s,store,ans);

        return ans;
        
    }
};