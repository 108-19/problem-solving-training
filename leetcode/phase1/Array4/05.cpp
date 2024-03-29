class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int m = queries.size();
    
    vector<int> result(m);
        
        for (int i = 0; i < m; ++i) {
            int val = queries[i][0];
            int index = queries[i][1];
            
            nums[index] += val;
            
          
            int sumEven = 0;
            for (int j = 0; j < n; ++j) {
                if (nums[j] % 2 == 0) {
                    sumEven += nums[j];
                }
            }
            
            result[i] = sumEven; 
        }
        
        return result;
    }
};
