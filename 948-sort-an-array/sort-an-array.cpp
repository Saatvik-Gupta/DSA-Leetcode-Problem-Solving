class Solution {
public:
    int partition(vector<int>& arr, int p, int r) {
        int i = p - 1;
        int j = r + 1;
        int x = arr[p];   // pivot

        while (true) {
            do {
                j--;
            } while (arr[j] > x);

            do {
                i++;
            } while (arr[i] < x);

            if (i < j)
                swap(arr[i], arr[j]);
            else
                return j;
        }
    }

    void quicksort(vector<int>& arr, int p, int r) {
        int q;
        if (p < r) {
             q = partition(arr, p, r);
            quicksort(arr, p, q);
            quicksort(arr, q + 1, r);
        }
    }

    vector<int> sortArray(vector<int>& arr) {
        int n=arr.size();
        int p=0;
        int r=n-1;
        quicksort(arr, p, r);
        
        return arr;
    }
};