class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int>store;

        for(string val:operations){

            if(val=="C"){
                store.pop();
            }

            else if(val=="+"){
                int f=store.top();
                store.pop();
                int s=store.top();
                int value=f+s;
                store.push(f); // as top wala pop ho gaya tha but we need it
                store.push(value);
            }

            else if(val=="D"){
                int top=store.top();
                store.push(top*2);
            }

            else store.push( stoi(val) );
        }

        int total=0;
        while(!store.empty()){
            total+=store.top();
            store.pop();
            
        }
        return total;
        
    }
};