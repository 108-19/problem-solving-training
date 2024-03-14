class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int primaryDiagonalSum = 0;
        int secondaryDiagonalSum = 0;

        for (int i = 0; i < n; ++i) {
            primaryDiagonalSum += mat[i][i];
            secondaryDiagonalSum += mat[i][n - 1 - i];
        }
        int totalSum = (n % 2 == 0) ? (primaryDiagonalSum + secondaryDiagonalSum) : (primaryDiagonalSum + secondaryDiagonalSum - mat[n / 2][n / 2]);

        return totalSum; 
    }
};
