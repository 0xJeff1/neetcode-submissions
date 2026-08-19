class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> hello;
    unordered_map<string, vector<string>> same;

    for (int i = 0; i < strs.size(); i++)
    {
        string bf = strs[i];

        sort(bf.begin(), bf.end());

        same[bf].push_back(strs[i]);
    }

    for (auto& [key, value] : same)
    {
        hello.push_back(value);
    }

    return hello;
    }
};
