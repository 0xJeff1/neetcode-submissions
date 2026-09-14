class Solution {
public:
    bool isValid(string s) {
       std::stack<char> st;

       for(int i = 0 ; i < s.size() ; i++)
       {

           if(st.empty()) 
           {
               std::cout << "1" << s[i]<< std::endl;
                st.push(s[i]);
                i++;
           }
          

          std::cout <<  "the I" << s[i] << std::endl;
          std::cout << "The TOP " << st.top() << std::endl;

           if (s[i] == ')' && st.top() == '(' || s[i] == ']' && st.top() == '[' || s[i] == '}' && st.top() == '{')
           {
                std::cout << "2" << st.top() << std::endl;
                st.pop();
           }
           else
           {
                std::cout << "3" << s[i] << std::endl;
                st.push(s[i]);
           }
       }

       if(st.empty())
       {
            return true;
       }
       else
            return false;  
    }
};
