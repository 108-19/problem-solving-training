class Solution {
public:
    int thirdMax(vector<int>& nums) {
         long firstMax = LONG_MIN, secondMax = LONG_MIN, thirdMax = LONG_MIN;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > firstMax) {
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = nums[i];
            } else if (nums[i] < firstMax && nums[i] > secondMax) {
                thirdMax = secondMax;
                secondMax = nums[i];
            } else if (nums[i] < secondMax && nums[i] > thirdMax) {
                thirdMax = nums[i];
            }
        }
        
        return (thirdMax == LONG_MIN) ? firstMax : thirdMax;
    }
};
