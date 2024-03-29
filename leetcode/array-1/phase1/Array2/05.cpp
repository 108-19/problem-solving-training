class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxScore = 0;
        int maxLeft = values[0] + 0; 

        for (int j = 1; j < values.size(); ++j) {
            int currentScore = maxLeft + values[j] - j;
            maxScore = max(maxScore, currentScore);
            maxLeft = max(maxLeft, values[j] + j);
        }

        return maxScore;
    }
};
