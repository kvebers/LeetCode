#include <iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {
        int cnt = 0;
        int len = word2.length();
        int len1 = word1.length();
        string returnVal;
        returnVal.reserve(len + len1);
        if (len1 < len)
            len = len1;
        while (cnt < len)
        {
            returnVal += word1[cnt];
            returnVal += word2[cnt];
            cnt++;
        }
        returnVal.append(word1.substr(cnt));
        returnVal.append(word2.substr(cnt));
        return returnVal;
    }
};
