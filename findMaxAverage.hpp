class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max = -1000000;
        for (int i = 0; i < nums.size() - k + 1; i++)
        {
            double temp = 0;
            for (int j = i; j < i + k; j++)
            {
                temp += nums[j]; 
            }
            temp /= k;
            if (temp > max)
                max = temp;
        }
        return max; 
    }
};
