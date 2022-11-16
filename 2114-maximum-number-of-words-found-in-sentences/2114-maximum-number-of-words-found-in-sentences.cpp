class Solution {
public:
    int mostWordsFound(vector<string>& s) { int j=0; int max=0;
        while(j<s.size()){
              string st=s[j]; string w=""; int ctr=1;
        for(int i=0;i<st.size();i++){
  char c=st[i];
            if(c==' ')
            ctr++;
            
        }
            if(ctr>max)
                max=ctr;
            ctr=0; 
            j++;
        }
                                           return max;
    }
};