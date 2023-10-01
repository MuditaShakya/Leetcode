class Solution {
public:
    string reverseWords(string s) {
        s=s+' ';
        string w="";
        string ans="";
       for(int i=0;i<s.size();i++)
       {
         if(s[i]!=' ')
            w=w+s[i];
           else{
               if(i==s.size()-1) ans=ans+rev(w);
               else{
              ans=ans+rev(w)+' ';
               w="";
               }
           }
       } return ans;
        
    }
    string rev(string s)
    {
     int n=s.size();
        string r="";
        for(int i=n-1;i>=0;i--)
        {
            r=r+s[i];
        } 
        return r;
    }
};