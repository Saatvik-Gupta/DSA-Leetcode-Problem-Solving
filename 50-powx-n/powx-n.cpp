class Solution {
public:
    double myPow(double x, int n) {
        
        long int binum=n;
        double ans=1;
    // Initial conditions

    if(n==0)  return 1;
    if(x==0)  return 0;
    if(x<0 && n==1) return 1/x;
    if(x>0 && n==1) return x;

    if(n<0){
        binum=-binum; // make binum positive
        x=1/x;
    }
    while(binum!= 0){
        if(binum % 2==1){
            ans=ans * x;
        }
        x= x * x;

        binum/=2;
    }

    return ans;

    }
};