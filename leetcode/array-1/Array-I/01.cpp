class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int numsSize = nums.size();
        std::vector<int> runningSum(numsSize);
        runningSum[0] = nums[0];
        for (int i = 1; i < numsSize; ++i) {
            runningSum[i] = runningSum[i - 1] + nums[i];
        }
        return runningSum;
    }
};
