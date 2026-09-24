class Solution {
public:
    int arrangeCoins(int n) 
    {
        
    long long result = 0;

    for (int i = 1; i <= n; i++)
    {
        result += i;

        if (result > n)
            return i - 1;
    }

    return result;
    }
};