class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int returnVal = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            returnVal ^= nums[i]; // Did not know whis operator before hand but that is kind of super neet
        }
        return returnVal;
    }
};

