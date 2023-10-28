class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> numsMap;
        int returnVal = 0;
        for (auto &num: nums)
        {
            if (numsMap[k - num] > 0)
            {
                numsMap[k - num]--;
                returnVal++;
            }
            else
                numsMap[num]++;
        }
        return returnVal;
    }
};
