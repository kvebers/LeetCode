#include <iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {
        int cnt = 0;
        int len = word2.length();
        string returnVal;
        if (word1.length() < len)
            len = word1.length();
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
