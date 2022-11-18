class Solution {
public:
    int countMatches(vector<vector<string>>& a, string key, string value) {
      int  ctr=0;
                for(int i=0;i<a.size();i++)
                {
                    vector<string> s=a[i];
                     if(key=="type")
            {  string st=s[0];
             if(st==value) ctr++;
                }
                    if(key=="color")
            {  string st=s[1];
             if(st==value) ctr++;
            }
                    if(key=="name")
            {  string st=s[2];
             if(st==value) ctr++;}
                }
        return ctr;
    }
};