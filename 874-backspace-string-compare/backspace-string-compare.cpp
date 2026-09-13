class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char>stack1;
        stack<char>stack2;

        for( char val : s){

            if( val!='#'){
                stack1.push(val);
            }

            else if(!stack1.empty()){
                stack1.pop();
            }
    }

    
        for( char val : t){

            if( val!='#'){
                stack2.push(val);
            }

            else if(!stack2.empty()){
                stack2.pop();
            }
    }

    return stack1==stack2;
        
    }
};