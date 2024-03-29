class Solution {
public:

         int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int countLargestGroup(int n) {
        int maxCount = 0, maxGroupCount = 0;

        for (int i = 1; i <= n; i++) {
            int sum = digitSum(i);
            int count = 0;
            for (int j = i; j <= n; j++) {
                if (digitSum(j) == sum) {
                    count++;
                }
            }
            if (count > maxCount) {
                maxCount = count;
                maxGroupCount = 1;
            } else if (count == maxCount) {
                maxGroupCount++;
            }
        }

        return maxGroupCount;  
    }
};
