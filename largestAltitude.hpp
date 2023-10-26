class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int sum = 0;
       int maxSum = 0;
       for (auto number :gain)
       {
           sum += number;
           if (sum > maxSum)
            maxSum = sum;
       } 
       return maxSum;
    }
};
