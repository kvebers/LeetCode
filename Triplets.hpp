#include <limits>

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int firstVal = INT_MAX; 
        int secVal = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (firstVal >= nums[i])
                firstVal = nums[i];
            else if (secVal >= nums[i])
                secVal = nums[i];
            else
                return true;
        }
        return false;
    }
};