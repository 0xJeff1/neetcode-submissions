class Solution {
public:
int helper_function(std::vector<int>& nums , int target , int start , int end)
{
    int mid = (start + end) / 2;

    if(start > end)
    {
        return start;
    }

    if(nums[mid] == target)
    {
        return mid;
    }
    
    if(nums[mid] < target)
    {
        return helper_function(nums,target,mid + 1,end);
    }
    else
    {
        return helper_function(nums,target,start,mid - 1);
    }

}

int searchInsert(std::vector<int>& nums, int target) 
{
    return helper_function(nums,target,0,nums.size() - 1);
}
};