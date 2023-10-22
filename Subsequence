class Solution {
public:
    bool isSubsequence(string s, string t) {
        int counter = 0;
        if (s.size() == 0)
            return true;
        for (auto &it: t)
        {
            if  (s[counter] == it)
                counter++;
            if (counter == s.size())
                return true;
        }
        return false;
    }
};
