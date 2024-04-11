class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int numOfZeros = 0;
      
        for (int i = 0; i < n; ++i) {
            if (arr[i] == 0) {
                numOfZeros++;
            }
        }
        
        for (int i = n - 1; i >= 0; --i) {
            if (arr[i] == 0) {
                if (i + numOfZeros < n) {
                    arr[i + numOfZeros] = 0;
                }
                numOfZeros--;
                if (i + numOfZeros < n) {
                    arr[i + numOfZeros] = 0;
                }
            } else {
                if (i + numOfZeros < n) {
                    arr[i + numOfZeros] = arr[i];
                }
            }
        }
    }
};
