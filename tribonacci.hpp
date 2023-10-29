class Solution {
public:
    int tribonacci(int n) {
        if (n == 0)
            return 0;
        if (n == 1 || n == 2)
            return 1;
        int val1 = 0, val2 = 1, val3 = 1, val4 = 0;
        for (int i = 3; i <= n; i++)
        {
            val4 = val1 + val2 + val3;
            val1 = val2;
            val2 = val3;
            val3 = val4;
        }
        return val3;
    }
};
