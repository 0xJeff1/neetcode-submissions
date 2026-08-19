class Solution {
public:

  std::string encode(std::vector<std::string>& strs) {

        int size1[strs.size()];
        std::string result;
        for(int i = 0 ; i < strs.size() ; i++)
        {
            size1[i]= strs[i].size();
        }

        for(int i = 0 ; i < strs.size() ; i++)
        {
            result = result + std::to_string(size1[i]) + '#' + strs[i];
        }
        std::cout << std::to_string(strs.size()) + "#" + result << std::endl;
        return  std::to_string(strs.size()) + "#" + result;
    }

std::vector<std::string> decode(std::string s)
{
    int j = 0;
    int t = 0;
    while(s[j] != '#')
    {
       t = t * 10 + (s[j] - '0');
       j++;
    }

    j = j + 1;
    int size = t; // t = 2 //14
    
    std::vector<std::string> decodeit(size);
    
    for (int i = 0; i < size ; i++)
    {
        int t = 0;
        
        while (s[j] != '#')
        {
            t = t * 10 + (s[j] - '0');
            j++;
        }
        j++; 
        
        for (int d = 0; d < t; d++)
        {
            decodeit[i] += s[j++];
        }
    }

    // std::cout << decodeit[0] << std::endl;
    // for (const std::string& str : decodeit)
    // {
    //     std::cout << str << std::endl;
    // }
    return decodeit;
}

};
