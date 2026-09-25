class Solution {
public:
    int arrangeCoins(int n) 
    {
            long long start = 1;
        long long end = n;

        while (start <= end)
        {
            long long middle = start + (end - start) / 2;

            long long result = middle * (middle + 1) / 2;

            if (result == n)
            {
                return middle;
            }
            else if (result > n)
            {
                end = middle - 1;
            }
            else
            {
                start = middle + 1;
            }
        }

        return end;
    }
};