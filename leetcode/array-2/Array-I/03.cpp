class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result;
        int carry = 0;
        int n = num.size();
    
        for (int i = n - 1; i >= 0 || k > 0; --i) {
            int digit = (i >= 0) ? num[i] : 0;
            digit += k % 10 + carry;
            k /= 10;
            carry = digit / 10;
            digit %= 10;
            result.push_back(digit);
        }
        
        if (carry > 0) {
            result.push_back(carry);
        }
        
        int left = 0, right = result.size() - 1;
        while (left < right) {
            swap(result[left], result[right]);
            left++;
            right--;
        }
        
        return result;
    }
};
