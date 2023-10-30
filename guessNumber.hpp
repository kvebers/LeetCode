/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int height = n;
        int guessNumb;
        while (low <= height)
        {
            int mid = low + (height - low) / 2;
            guessNumb = guess(mid);
            if (guessNumb == 0)
                return mid;
            else if (guessNumb == 1)
                low = mid + 1;
            else if (guessNumb == -1)
                height = mid - 1;
        }
        return 0;
    }
};
