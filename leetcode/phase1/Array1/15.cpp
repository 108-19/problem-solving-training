class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
       int matrix[50][50] = {0}; 
        int oddCount = 0;

        for (int k = 0; k < indices.size(); ++k) {
            int ri = indices[k][0]; 
            int ci = indices[k][1]; 

            for (int j = 0; j < n; ++j) {
                matrix[ri][j]++;
            }
            for (int i = 0; i < m; ++i) {
                matrix[i][ci]++;
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] % 2 != 0) {  
                    oddCount++;
                }
            }
        }

        return oddCount;  
    }
};
