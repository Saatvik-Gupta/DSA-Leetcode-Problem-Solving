class Solution {
public:
    int magicalString(int n) {

        if (n == 0) return 0;
        if (n <= 3) return 1;

        vector<int> ans(n + 2);

        ans[0] = 1;
        ans[1] = 2;
        ans[2] = 2;

        int count = 1;  // number of 1s
        int i = 2;      // points to the frequency
        int j = 3;      // position to insert
        int num = 1;    // number to insert

        while (j < n) {

            int times = ans[i];

            for (int k = 0; k < times && j < n; k++) {
                ans[j] = num;

                if (num == 1)
                    count++;

                j++;
            }

            num = 3 - num;  // 1 -> 2, 2 -> 1
            i++;
        }

        return count;
    }
};