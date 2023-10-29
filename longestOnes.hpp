class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxSubSize = 0;
        int rightSide = 0;
        int leftSide = 0;
        int countZeros = 0;
        while (rightSide < nums.size())
        {
            if (nums[rightSide] == 0)
                countZeros++;
            while (countZeros > k)
            {
                if (nums[leftSide] == 0)
                    countZeros--;
                leftSide++;
            }
            if (maxSubSize < rightSide - leftSide + 1)
                maxSubSize = rightSide - leftSide + 1;
            rightSide++;
        }
        return maxSubSize;   
    }
};
