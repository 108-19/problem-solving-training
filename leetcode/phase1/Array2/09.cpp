class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {

        for (int i = lowLimit; i <= highLimit; ++i) {
            int boxNumber = calculateBoxNumber(i);
            boxCounts[boxNumber]++;
            maxBalls = max(maxBalls, boxCounts[boxNumber]);
        }

        return maxBalls; 
    }
};
