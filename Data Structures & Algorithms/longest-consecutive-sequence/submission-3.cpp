#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> map;

    for (int num : nums)
    {
        map[num] = true;
    }

    int longest = 0;

    for (int num : nums)
    {
        if (map.find(num - 1) != map.end())
        {
            continue;
        }

        int current = num;
        int length = 1;

        while (map.find(current + 1) != map.end())
        {
            current++;
            length++;
        }

        longest = max(longest, length);
    }

    return longest; 
    }
};
