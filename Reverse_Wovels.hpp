#include <iostream>
using namespace std;

class Solution {
public:
  string reverseVowels(string s) {
    int len = s.length() - 1;
    for (int i = 0; i <= len; i++) {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
          s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
          s[i] == 'O' || s[i] == 'U') {
        while (s[len] != 'a' && s[len] != 'e' && s[len] != 'o' &&
               s[len] != 'u' && s[len] != 'i' && len > i && s[len] != 'A' &&
               s[len] != 'E' && s[len] != 'O' && s[len] != 'U' && s[len] != 'I')
          len--;
        if (len > i) {
          char temp = s[len];
          s[len] = s[i];
          s[i] = temp;
          len--;
        } else
          break;
      }
    }
    return s;
  }
};