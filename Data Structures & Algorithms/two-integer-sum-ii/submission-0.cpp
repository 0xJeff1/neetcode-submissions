class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int start = 0;

    while (start < numbers.size() - 1)
    {
        int needed = target - numbers[start];

        int left = start + 1;
        int right = numbers.size() - 1;

        while (left <= right)
        {
            int middle = (left + right) / 2;
            if (needed == numbers[middle])
            {
                return {start + 1, middle + 1};
            }
            else if (needed < numbers[middle])
            {
                right = middle - 1;
            }
            else
            {
                left = middle + 1;
            }
        }

        start++;
    }

    return {};
    }
};
