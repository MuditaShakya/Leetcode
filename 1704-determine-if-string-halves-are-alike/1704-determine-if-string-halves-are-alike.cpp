class Solution {
public:
    bool halvesAreAlike(string s) {
        int h=s.size()/2;  int ctr=0, ctrr=0;
        
        for(int i=0;i<h;i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                ctr++;
        }
        for(int i=h;i<s.size();i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                ctrr++;
        }
        if(ctr==ctrr)
            return true;
        else return false;
    }
};