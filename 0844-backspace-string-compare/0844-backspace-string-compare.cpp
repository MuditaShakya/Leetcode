class Solution {
public:
    bool backspaceCompare(string s, string t) {
          stack<char> st;
         stack<char> st2;
       for(int i=0;i<s.size();i++) {
           if(s[i]!='#')
        st.push(s[i]);
               else if(!st.empty())
                   st.pop();
       }
         
       for(int j=0;j<t.size();j++) {
           if(t[j]!='#')
        st2.push(t[j]);
               else if(!st2.empty())
                   st2.pop();
        }
        if(st.size()!=st2.size())
              return false;
       while(! st.empty())
       {
           
           if(st.top()!=st2.top())
               return false;
           
           st.pop();
           st2.pop();
       }
        return true;
    }   
};