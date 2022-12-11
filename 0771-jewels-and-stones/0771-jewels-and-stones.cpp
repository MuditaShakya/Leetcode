class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int l=s.size(); int ctr=0,k=0;
       
        while(k<j.size()){
         char c=j[k];
        for(int i=0;i<l;i++)
        {
          if(s[i]==c)
          ctr++;
        }
        k++;
        } return ctr;
    }
};