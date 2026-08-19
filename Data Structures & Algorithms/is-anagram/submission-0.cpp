#include <unordered_map>
#include <string>

class Solution
{
public:
    bool isAnagram(std::string s, std::string t)
    {
        if (s.size() != t.size())
        {
            return false;
        }

        std::unordered_map<char, int> freqS;
        std::unordered_map<char, int> freqT;

        for (int i = 0; i < s.size(); i++)
        {
            freqS[s[i]]++;
            freqT[t[i]]++;
        }

        return freqS == freqT;
    }
};