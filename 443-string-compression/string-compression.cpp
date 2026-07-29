class Solution {
public:
    int compress(vector<char>& s) {

    int n=s.size();
    int idx=0;
    char ch;
    int count;

    for( int i=0; i<n; i++){
         ch=s[i];
         count=0;
         // calculating the number of times ch occur

         while(i<n && s[i]==ch){
            count++; i++;
         }

         // Now two cases count=1 or count>1

         if(count ==1){
            s[idx]=ch;
            idx++;
         }

         else // count>1 in-place ch along with its count
         {
            s[idx]=ch; idx++;
            string store_count= to_string(count);

            for(char dig: store_count){
                s[idx]=dig;
                idx++;
            }
         }
         i--;
        
    }

    return idx;
    }
};