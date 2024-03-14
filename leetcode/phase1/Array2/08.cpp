class Solution {
public:
    vector<int> sumZero(int n) {
    vector<int> result(n);
        int sum = 0;
        int current = 1;
        for (int i = 0; i < n - 1; ++i) {
            result[i] = current;
            sum += current;
            ++current;
        }

        result[n - 1] = -sum;

        return result;   
    }
};
