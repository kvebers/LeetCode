class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> returnVec;
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<int> return1;
        vector<int> return2;

        for (auto it : set1)
        {
            if (set2.count(it) == 0)
                return1.push_back(it); 
        }
        for (auto it : set2)
        {
            if (set1.count(it) == 0)
                return2.push_back(it); 
        }
        returnVec.push_back(return1);
        returnVec.push_back(return2);

        return returnVec;
    }
};
