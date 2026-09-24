class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int digits = 0;
        int temp = n;

        // Count number of digits
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        while (n > 0) {
            int rem = n % 10;

            if (digits % 2 == 1)
                sum += rem;
            else
                sum -= rem;

            digits--;
            n /= 10;
        }

        return sum;
    }
};