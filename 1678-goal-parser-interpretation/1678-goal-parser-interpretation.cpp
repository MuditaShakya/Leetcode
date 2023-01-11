class Solution {
public:
    string interpret(string c) {
        int l=c.size(); string w="", t="al"; 
    for(int i=0;i<l;i++)
    {
        if(c[i]=='G')
            w=w+c[i];
        if(c[i]=='(')
        { if(c[++i]==')')
            w=w+'o';
         else{
             w=w+t;
             i+=2;
         }
         
        }
    }
    
    return w;
    }
};