class Solution {
public:
    string defangIPaddr(string a) { string res="";
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='.')
                res+="[.]";
            else 
                res=res+a[i];
        } return res;
    }
};