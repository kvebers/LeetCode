class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int heightLeft = 0;
        int heightRight = height.size() - 1;
        int area;
        while(heightLeft < heightRight)
        {
            if (height[heightLeft] < height[heightRight])
            {
                int area = height[heightLeft] * (heightRight - heightLeft);
                maxArea = max(area, maxArea);
                heightLeft++;
            }
            else
            {
                int area = height[heightRight] * (heightRight - heightLeft);
                maxArea = max(area, maxArea);
                heightRight--;
            }
        }
        return maxArea;
    }
};
