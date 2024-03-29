class Solution {
public:
    double trimMean(vector<int>& arr) {
        int arrSize = arr.size();
        sort(arr.begin(), arr.end());


        int trimSize = arrSize * 0.05; 
        int sum = 0;
        int count = 0;

        
        for (int i = trimSize; i < arrSize - trimSize; ++i) {
            sum += arr[i];
            ++count;
        }

        
        return static_cast<double>(sum) / count;
    }
};
