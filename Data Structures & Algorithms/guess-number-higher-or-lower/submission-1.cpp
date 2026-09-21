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
    int guessNumber(int n) 
    {
        int l = 1 , r = n;
        int result = guess(n);
        int mid = (l + r) / 2;
        if(guess(mid) == 0)
            return mid;
        if(result == -1)
        {
            return guessNumber(mid - 1); 
        }
        else
            return guessNumber(mid + 1);
    }
};