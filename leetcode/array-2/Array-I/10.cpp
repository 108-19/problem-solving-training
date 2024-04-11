class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int totalSum = 0;
        for (int i = 0; i < arr.size(); ++i) {
            totalSum += arr[i];
        }
        
        if (totalSum % 3 != 0) {
            return false;
        }
        
        int targetSum = totalSum / 3;
        int currentSum = 0;
        int partitions = 0;
        
        for (int i = 0; i < arr.size(); ++i) {
            currentSum += arr[i];
            if (currentSum == targetSum) {
                currentSum = 0;
                partitions++;
            }
        }
        
        return partitions >= 3;
    }
};
