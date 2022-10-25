class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& a, vector<string>& b) {
        string s="", s1="";
        for(int i=0;i<a.size();i++)
        {
            s=s+a[i];
        }
         for( int i=0;i<b.size();i++)
        {
            s1=s1+b[i];
        }
        if(s1==s)
            return true;
        else return false;
    
        
    }
};