class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> result;
        int n = s.size();
        
        int start = 0;
        char prevChar = s[0];
        int consecutiveCount = 1;
        
        for (int i = 1; i < n; ++i) {
            if (s[i] == prevChar) {
                consecutiveCount++;
            } else {
                if (consecutiveCount >= 3) {
                    result.push_back({start, i - 1});
                }
                start = i;
                prevChar = s[i];
                consecutiveCount = 1;
            }
        }
        
        if (consecutiveCount >= 3) {
            result.push_back({start, n - 1});
        }
        
        return result;
    }
};
