class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count = 0;
        int frequency[100] = {0};
        
        for (int i = 0; i < dominoes.size(); ++i) {
            int a = dominoes[i][0], b = dominoes[i][1];
            int normalizedPair = min(a, b) * 10 + max(a, b);
            count += frequency[normalizedPair]++;
        }
        
        return count;
    }
};
