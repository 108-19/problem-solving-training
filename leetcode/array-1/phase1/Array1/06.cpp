class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
     int size = nums.size();
        vector<int> target(size, 0); 

        for (int i = 0; i < size; ++i) {
            int idx = index[i];
            for (int j = size - 1; j > idx; --j) {
                target[j] = target[j - 1];
            }
            target[idx] = nums[i];
        }

        return target;
    }
};
