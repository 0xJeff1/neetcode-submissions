class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
           int prod = 1, zeroCount = 0;
        for (int num : nums) 
        {
            if (num != 0) 
            {
                prod *= num;
            } else {
                zeroCount++;
            }
        }
        // { -1,0,1,2,3 } // zerocount = 1 and th 

        if (zeroCount > 1) 
        {
            return vector<int>(nums.size(), 0); // this is a good move like I didnt thought about it 
        }

        vector<int> res(nums.size());
        for (size_t i = 0; i < nums.size(); i++) {
            if (zeroCount > 0) // 1
            {
                res[i] = (nums[i] == 0) ? prod : 0;
            } else {
                 res[i] = prod / nums[i];
            }
        }
        return res;
    }
};
