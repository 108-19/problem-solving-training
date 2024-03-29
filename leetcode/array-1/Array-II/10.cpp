class Solution {
public:
    int heightChecker(vector<int>& heights) {
       int n = heights.size();
        int expected[n]; 
        for (int i = 0; i < n; ++i) {
            expected[i] = heights[i];
        }
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (expected[j] > expected[j + 1]) {
                    int temp = expected[j];
                    expected[j] = expected[j + 1];
                    expected[j + 1] = temp;
                }
            }
        }
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (heights[i] != expected[i]) {
                ++count;
            }
        }

        return count; 
    }
};
