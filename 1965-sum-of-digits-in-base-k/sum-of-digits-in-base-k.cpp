class Solution {
public:
int digits_sum(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }

    return sum;
}

    int sumBase(int n, int k) {

        int ans=0;
        int pro=1;

        while(n>0){
            int rem=n%k;
            ans+=rem * pro;
            n/=k;
            pro=pro*10;

        }
        return digits_sum(ans);
    }
};