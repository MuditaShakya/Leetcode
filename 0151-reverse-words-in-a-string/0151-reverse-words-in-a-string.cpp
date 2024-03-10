class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word="";
        char c;
        int i=0;
        s=s+" ";
        while(i<s.size())
        {
            if(s[i]!=' ')
            {
                word=word+s[i];
            }
            else{
                if(word!="")
                st.push(word);
                word="";
            }
            i++;
        }
        string ans="";
        while(!st.empty())
        {
            string w=st.top();
            ans+=w;
            
            st.pop();
            if(!st.empty())
            ans+=" ";
        }
        int t=ans.size();
        if(ans[0]==' ')
            ans.erase(0);
        if(ans[t-1]==' ')
            ans.erase(t-1);
        return ans;
    }
};