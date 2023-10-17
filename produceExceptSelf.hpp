class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(nums.size(), 1), temp(nums.size(), 1);

        for (int i = 1; i < nums.size(); i++)
        {
            result[i] = nums[i - 1] * result[i - 1];
            temp[n - i - 1] = nums[n - i] * temp[n - i];
        }
        for (int i = 0; i < nums.size(); i++)
            result[i] *= temp[i];
        return result;
    }
};