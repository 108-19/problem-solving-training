class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int aliceTotal = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int bobTotal = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        int diff = (bobTotal - aliceTotal) / 2;
        
        sort(aliceSizes.begin(), aliceSizes.end());
        sort(bobSizes.begin(), bobSizes.end());

        int i = 0, j = 0;
        while (i < aliceSizes.size() && j < bobSizes.size()) {
            int aliceCandy = aliceSizes[i];
            int bobCandy = bobSizes[j];
            int currentDiff = bobCandy - aliceCandy;

            if (currentDiff == diff) {
                return {aliceCandy, bobCandy};
            } else if (currentDiff < diff) {
                j++; 
            } else {
                i++; 
            }
        }
        
        return {}; 
    }
};
