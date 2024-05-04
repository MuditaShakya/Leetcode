class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        int n=num.size();
        for(char c:num)
        {
            while(!s.empty() && k>0 && s.top()>c)
            {
                s.pop();
                k=k-1;
            }
            if(!s.empty() || c!='0')
                s.push(c);
            
        }
        // if k is still not zero
        while(k!=0 && !s.empty())
        {
            s.pop();
            k--;
            
        }
        if(s.empty())
            return "0";
        
        while(!s.empty())
        {
            num[n-1]=s.top();
            s.pop();
            n-=1;
        }
        return num.substr(n);
        
    }
};