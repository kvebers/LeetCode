class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        for (int i=2; i < cost.size(); i++)
        {
            if (cost[i - 1] < cost [i - 2])
                cost[i] += cost[i - 1];
            else
                cost[i] += cost[i - 2];
        }
        if (cost[cost.size() - 1] < cost [cost.size() - 2])
            return cost[cost.size() - 1];
        else
            return cost[cost.size() - 2];
    }
};
