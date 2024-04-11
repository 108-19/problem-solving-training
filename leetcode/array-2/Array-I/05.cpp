class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, right = 0;
        int zeroCount = 0;
        int maxWindowSize = 0;
        
        while (right < nums.size()) {
            if (nums[right] == 0) {
                zeroCount++;
            }
            
            while (zeroCount > 1) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }
            
            maxWindowSize = max(maxWindowSize, right - left);
            right++;
        }
        
        return maxWindowSize;
    }
};
