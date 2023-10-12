#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int temp = 0;
        vector<bool> returnBool;
        auto it = max_element(candies.begin(), candies.end());
        if (it != candies.end())
           temp = *it; 
        for (int it: candies)
        {
            if (it + extraCandies < temp)
                returnBool.push_back(false);
            else
                returnBool.push_back(true);
        }
        return returnBool;
    }
};