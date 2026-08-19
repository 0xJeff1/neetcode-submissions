class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         std::unordered_map<int, int> freq;

    for (int x : nums) {
        freq[x]++;
    }

    std::vector<std::vector<int>> bucket(nums.size() + 1);

    for (const auto& [num, count] : freq) {
        bucket[count].push_back(num);
    }

    std::vector<int> result;

    for (int i = static_cast<int>(bucket.size()) - 1;
         i >= 0 && static_cast<int>(result.size()) < k;
         --i)
    {
        for (int num : bucket[i]) {
            result.push_back(num);

            if (static_cast<int>(result.size()) == k) {
                break;
            }
        }
    }

    return result;
    }
};
