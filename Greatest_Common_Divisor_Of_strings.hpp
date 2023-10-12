#include <iostream>
using namespace std;

class Solution {
public:
  string gcdOfStrings(string str1, string str2) {
    int cnt = 1;
    if (str1 + str2 != str2 + str1)
      return "";
    while (str1.length() > 0) {
      string string2 = str2;
      int len = 0;
      while (string2.find(str1) != -1) {
        string2 = string2.substr(str1.length());
        len += str1.length();
      }
      if (len == str2.length())
        return str1;
      len = 0;
      while (cnt <= str1.length() / 2) {
        if (str1.length() % cnt == 0 && str2.length() % cnt == 0)
          len = cnt;
        cnt++;
      }
      str1 = str1.substr(0, len);
    }
    return "";
  }
};