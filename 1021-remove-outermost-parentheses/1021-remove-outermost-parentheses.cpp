class Solution {
public:
    string removeOuterParentheses(string s) {
        int i=0;
        int count=0;
        string ans;
        while(i<s.size())
        {
            if(s[i]=='(')
            {
                if(count>0)
                    ans+=s[i];
                count++; 
            } 
            else {
                count--;
                if(count>0)
                    ans+=s[i];
                  
                 }
            i++;
        }
        return ans;
    }
};