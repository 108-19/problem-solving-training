class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
       const int Max_num = 50000; 
        int freq[Max_num] = {0}; 
        int firstIndex[Max_num] = {0}; 
        int lastIndex[Max_num] = {0};
        int maxFreq = 0;
        int minLength = nums.size();

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            if (freq[num] == 0) {
                firstIndex[num] = i;
            }
            lastIndex[num] = i;
            freq[num]++;
            maxFreq = max(maxFreq, freq[num]);
        }

        for (int i = 0; i < Max_num; ++i) {
            if (freq[i] == maxFreq) {
                minLength = min(minLength, lastIndex[i] - firstIndex[i] + 1);
            }
        }

        return minLength; 
    }
};
