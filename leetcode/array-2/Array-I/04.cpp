class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = -1, secondLargest = -1;
        int largestIndex = -1;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > largest) {
                secondLargest = largest;
                largest = nums[i];
                largestIndex = i;
            } else if (nums[i] > secondLargest) {
                secondLargest = nums[i];
            }
        }
        
        return largest >= 2 * secondLargest ? largestIndex : -1;
    }
};
