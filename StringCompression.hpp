#include <vector>
using namespace std;
#include <iostream>
#include <string>

class Solution {
public:
    int compress(vector<char>& chars) {
        char previousChar = chars[0];
        vector<char> output;
        int cnt = 0;
        int returnVal = 0;
        for (auto &c : chars)
        {
            if (c != previousChar){
                // push back the 
                output.push_back(previousChar);
                // push bacck the coun
                string cntToString = to_string(cnt);
                returnVal += 1;
                if (cnt != 1)
                {
                    for (auto &ch: cntToString)
                    {
                        output.push_back(ch);
                        returnVal += 1;
                    }
                }
                previousChar = c;
                cnt = 0;
            }
            cnt++;
        }
        output.push_back(previousChar);
                // push bacck the coun
        string cntToString = to_string(cnt);
        returnVal += 1;
        if (cnt != 1)
        {
            for (auto &ch: cntToString)
            {
                output.push_back(ch);
                returnVal += 1;
            }
        }
        chars = output;
        return returnVal;
    }
};