class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> result;
        int prefixSum = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            prefixSum = ((prefixSum << 1) + nums[i]) % 5;
            result.push_back(prefixSum == 0);
        }
        
        return result;
    }
};
