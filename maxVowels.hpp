class Solution {
public:
    int maxVowels(string s, int k) {
        currentVowelCount = 0;
        for (int i = 0; int i < k; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                currentVowelCount++;
        } 
        int maxVowelCount = currentVowelCount;
        for (int i = k; i < s.size(); i++)
        {
            if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u')
                currentVowelCount--;
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                currentVowelCount++;
            if (currentVowelCount > maxVowelCount)
                maxVowelCount = currentVowelCount;
        }
        return maxVowelCount;
    }
};
