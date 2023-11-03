class Solution {
public:
    bool isPalindrome(string s) {
       // string st="";
        for(int i=0;i<s.size();i++){
            int a=s[i];
             if ((s[i] < 'A' || s[i] > 'Z') && (s[i] < 'a'
                || s[i] > 'z') && (s[i] < 48 || s[i] > 57)) {
            
                //char ch = tolower(s[i]);
                s.erase(i,1);
                i--;}
                else{
                    if(s[i]>='A' && s[i]<='Z')
                        s[i]=s[i]+32;
                }
            }
                
            
            string rev = s;
            reverse(rev.begin(), rev.end());
            if(s==rev)
                return true;
            else return false;
        
    }
};