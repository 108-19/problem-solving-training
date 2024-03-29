class Solution {
public:
    vector<int> getRow(int rowIndex) {
      const int MAX = 34; 
    vector<int> row(MAX, 0); 
        row[0] = 1; 

        for (int i = 1; i <= rowIndex; ++i) {
            for (int j = i; j >= 1; --j) {
                row[j] += row[j - 1]; 
            }
        }

       
        vector<int> result(row.begin(), row.begin() + rowIndex + 1);
        return result;  
    }
};
