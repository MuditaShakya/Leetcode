class Solution {
public:
    int strStr(string h, string n) {
        int l1=h.size(); int l2=n.size();  char a=n[0];
        for(int i=0;i<l1;i++)
        { char b=h[i];
            if(a==b)
            { 
                string st=h.substr(i,l2); 
             if(st==n){
                 return i;
             break;}
            }
        }
        return -1 ;
    }
};

/*int i=0; int idx=0;
        
       char a=n[0];
            for(int j=0;j<l1;j++)
            {
                char b=h[j];
                if(a==b)
                {
                    idx=j;  break;  }         
            } string word="";
        for(int i=idx;i<idx+l2;i++)
        {
            char d=h[i];
            word=word+d;
        }
        if(word==n)
        return idx;
            else return -1;*/