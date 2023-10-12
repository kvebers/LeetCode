class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for (int i = 0; i < flowerbed.size();)
        {
            if (flowerbed[i] == 0)
            {
                bool emptyLeft = false;
                bool emptyRight = false;
                if (i == 0 || flowerbed[i - 1] == 0)
                    emptyLeft = true;
                if (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)
                    emptyRight = true;
                if (emptyRight == true && emptyLeft == true)
                {
                    count++;
                    i++;
                }
            }
            i++;
        }
        if (n > count)
            return false;
        else
            return true;
    }
};