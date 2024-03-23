class Solution {
public:
    int minStartValue(vector<int>& nums) {
         int minStartValue = 1;
        int currentSum = 0;

        for (int num : nums) {
            currentSum += num;
            minStartValue = std::max(minStartValue, 1 - currentSum);
        }

        return minStartValue;
    }
};
