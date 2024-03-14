class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
         int n = arr.size();
        int sum = 0;

        for (int j = 0; j< n; ++j) {
            for (int length = 1; j + length <= n; length += 2) {
                int k = j + length - 1; 
                
                for (int i = j; i <= k; ++i) {
                    sum += arr[i];
                }
            }
        }

        return sum;
    }
};
