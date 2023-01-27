class Solution {
public:
    int romanToInt(string s) {
        int l=s.size(); int sum=0;
        for(int i=0;i<l;i++)
        {
            char c=s[i];
            
            if(c=='I')
            {
                if(s[i+1]=='V'){
                    sum=sum+4;
                    i++;
                }
                else if(s[i+1]=='X'){
                    sum=sum+9;  i++;  }
            else
                sum=sum+1;
            
            }
            if(c=='V')
                sum=sum+5;
            
            if(c=='X')
            {
                 if(s[i+1]=='L'){
                    sum=sum+40;
                    i++;
                }
                else if(s[i+1]=='C'){
                    sum=sum+90;  i++;  }
            else
                sum=sum+10;
            }
            
            if(c=='L')
                sum=sum+50;
            if(c=='C')
            {
                 if(s[i+1]=='D'){
                    sum=sum+400;
                    i++;
                }
                else if(s[i+1]=='M'){
                    sum=sum+900;  i++;  }
            else
                sum=sum+100;
            }
                
            if(c=='D')
                sum=sum+500;
            if(c=='M')
                sum=sum+1000;
            
        }
        return sum;
    }
};