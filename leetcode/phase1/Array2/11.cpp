class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n)); 
        int num = 1;
        int rowStart = 0, rowEnd = n - 1;
        int colStart = 0, colEnd = n - 1;

        while (rowStart <= rowEnd && colStart <= colEnd) {
           
            for (int i = colStart; i <= colEnd; ++i) {
                matrix[rowStart][i] = num++;
            }
            ++rowStart;

         
            for (int i = rowStart; i <= rowEnd; ++i) {
                matrix[i][colEnd] = num++;
            }
            --colEnd;

            
            if (rowStart <= rowEnd) {
                for (int i = colEnd; i >= colStart; --i) {
                    matrix[rowEnd][i] = num++;
                }
                --rowEnd;
            }

        
            if (colStart <= colEnd) {
                for (int i = rowEnd; i >= rowStart; --i) {
                    matrix[i][colStart] = num++;
                }
                ++colStart;
            }
        }

        return matrix;
    }
};
