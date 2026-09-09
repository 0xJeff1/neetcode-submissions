class Solution {
public:
    bool isPalindrome(string s) 
    {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
for (char &c : s) {
    c = tolower(c);
}
    int start = 0;
    int end = s.size() - 1;
    while(start < end)
    {
        if (!isalnum(s[start]))
        {
            start++;
            continue;
            
        }
        if (!isalnum(s[end]))
        {            
            end--;
            continue;
        }
        if(s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
    }
};
