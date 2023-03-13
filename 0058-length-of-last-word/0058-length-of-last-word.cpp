class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end()); int i=0; int ctr=0;
        for(i=0;i<s.size();i++)
        {
            char c=s[i];
            if(c==' ' && ctr==0)
            {
                i++;
            } c=s[i];
                if(c!=' ')
                {
                    ctr++;
                    
                }
            
           
                 else if(c==' ' && ctr!=0) return ctr;
            
            
        }
        return ctr;
    }
};