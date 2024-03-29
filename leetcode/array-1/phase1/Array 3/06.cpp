class Solution {
public:
    bool checkZeroOnes(string s) {
         int len = s.length();

        int maxOnes = 0, maxZeros = 0;
        int currOnes = 0, currZeros = 0;

        for (int i = 0; i < len; i++) {
            if (s[i] == '1') {
                currOnes++;
                if (currOnes > maxOnes) {
                    maxOnes = currOnes;
                }
                currZeros = 0;
            } else {
                currZeros++;
                if (currZeros > maxZeros) {
                    maxZeros = currZeros;
                }
                currOnes = 0;
            }
        }

        return maxOnes > maxZeros;
    }
};
