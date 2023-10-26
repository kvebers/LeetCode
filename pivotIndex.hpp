class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (auto it: nums)
        {
            sum += it;
        }
        int rightSide = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (rightSide == sum - rightSide - nums[i])
                return i;
            rightSide += nums[i];
        }
        return -1;
    }
};
