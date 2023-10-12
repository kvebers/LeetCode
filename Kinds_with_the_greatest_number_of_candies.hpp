#include <vector>
using namespace std;

class Solution {
public:
  vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
    int temp = 0;
    for (auto it = candies.begin(); it != candies.end(); it++) {
      if (temp < *it)
        temp = *it;
    }
    vector<bool> returnBool;
    for (auto it = candies.begin(); it != candies.end(); it++) {
      if (*it + extraCandies < temp)
        returnBool.push_back(false);
      else
        returnBool.push_back(true);
    }
    return returnBool;
  }
};