class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        bool maxZeros = false;
        int rightSide = 0;
        int leftSide = 0;
        int maxVal = 0;
        int zeroPos = -1;
        while (rightSide < nums.size())
        {
            if (nums[rightSide] == 1)
                rightSide++;
            else if (nums[rightSide] == 0 && maxZeros == false)
            {
                zeroPos = rightSide;
                maxZeros = true;
                rightSide++;
            }
            else
            {
                if (maxVal < rightSide - leftSide - 1)
                    maxVal = rightSide - leftSide - 1;
                leftSide = zeroPos + 1;
                zeroPos = rightSide;
                rightSide++;
            }
        }
        if (maxVal < rightSide - leftSide - 1)
            maxVal = rightSide - leftSide - 1;
        return maxVal; 
    }
};
