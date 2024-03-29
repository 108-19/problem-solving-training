class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
  
        bool isExist = true;

        for (int i = 0; i < n; ++i) {
            if (nums[i] == 1) {
                if (i <= k) {
                    isExist = false;
                    break;
                }
             
            }
        }

        return isExist;
    }
};
