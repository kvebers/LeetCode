#include <iostream>
using namespace std;

class Solution {

public:
  string mergeAlternately(string word1, string word2) {
    int cnt = 0;
    string returnVal;
    while (cnt < word1.length() && cnt < word2.length()) {
      returnVal += word1[cnt];
      returnVal += word2[cnt];
      cnt++;
    }
    returnVal.append(word1.substr(cnt));
    returnVal.append(word2.substr(cnt));
    return returnVal;
  }
};
