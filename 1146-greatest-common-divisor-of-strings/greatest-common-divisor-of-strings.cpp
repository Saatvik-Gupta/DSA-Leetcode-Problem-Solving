class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        string a=str1 + str2;
        string b= str2 + str1;

        if(a!=b) return ""; // checking common sequence exist or not

        int len= gcd(str1.length(), str2.length());

        return str1.substr(0,len);



        
    }
};