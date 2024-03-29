class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
    vector<int> freq(n + 1, 0);
        
        int m = rounds.size();
        
        for (int i = 0; i < m - 1; ++i) {
            int start = rounds[i], end = rounds[i + 1];
            if (start <= end) {
                for (int j = start; j < end; ++j) {
                    freq[j]++;
                }
            } else {
                for (int j = start; j <= n; ++j) {
                    freq[j]++;
                }
                for (int j = 1; j < end; ++j) {
                    freq[j]++;
                }
            }
        }
       
        int maxFreq = *max_element(freq.begin(), freq.end());
       
        vector<int> result;
        for (int i = 1; i <= n; ++i) {
            if (freq[i] == maxFreq) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
