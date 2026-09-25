class Solution {
public:
     long long binarySearch(long long start, long long end, long long n)
    {
        if (start > end)
            return end;

        long long middle = start + (end - start) / 2;
        long long result = middle * (middle + 1) / 2;

        if (result == n)
        {
            return middle;
        }
        else if (result > n)
        {
            return binarySearch(start, middle - 1, n);
        }
        else
        {
            return binarySearch(middle + 1, end, n);
        }
    }

    int arrangeCoins(int n)
    {
        return binarySearch(1, n, n);
    }
};