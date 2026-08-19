class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
              for(int j = 0 ; j < nums.size() ; j++)
        {
            for(int i = j + 1 ; i < nums.size() ; i++)
            {
                if(nums[j] + nums[i] == target)
                {
                    std::vector<int>found={j , i};
                    return (found);
                }
            }
        }
        return {};
    }
};
