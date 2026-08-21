class Solution {
public:
    long long sumAndMultiply(int n) {

        string s=to_string(n);
        string num="";


        for( char ch: s){
            if( ch!='0'){
                num+=ch;
            }
        }

        if(num.empty()){
            return 0;
        }

        long long int x=stoi(num);
        long long int temp=x;
        long long int sum=0;

        while( temp>0 ){
            int digit= temp%10;
            sum+= digit;
            temp/=10;
        }

        return x*sum;

        
    }
};