class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> leMap;
        unordered_set<int> leSet;
        for (auto it : arr)
            leMap[it]++;
        for (const auto &it: leMap)
            leSet.insert(it.second);
        if (leSet.size() != leMap.size())
            return false;
        return true;
    }
};
