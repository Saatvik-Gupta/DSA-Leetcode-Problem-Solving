class Solution {
public:
    int maximum69Number(int num) {

        vector<int> store;

        while(num > 0) {
            int rem = num % 10;
            store.push_back(rem);
            num /= 10;
        }

        // Change the leftmost 6 into 9
        for(int i = store.size() - 1; i >= 0; i--) {
            if(store[i] == 6) {
                store[i] = 9;
                break;
            }
        }

        // Convert digits back into number
        int result = 0;

        for(int i = store.size() - 1; i >= 0; i--) {
            result = result * 10 + store[i];
        }

        return result;
    }
};