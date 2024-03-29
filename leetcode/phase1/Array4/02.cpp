class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c) {
           
           
            return mat;
        }

        vector<vector<int>> reshaped(r, vector<int>(c));
        int Row = 0, Column = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                reshaped[Row][Column] = mat[i][j];
                Column++;
                if (Column == c) {
                    Row++;
                    Column = 0;
                }
            }
        }

        
        
        return reshaped;
    }

    void printMatrix(vector<vector<int>>& matrix) {
        for (const auto& row : matrix) {
            for (int num : row) {
                cout << num ;
            }
           
        }
    }
};
