class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> s;
        for(int i=0;i<a.size();i++)
        {
            while(!s.empty() && s.top()>0 && a[i]<0)
            {
                int sum=a[i]+s.top();
                if(sum>0)
                    a[i]=0;
                else if(sum<0)
                    s.pop();
                else {
                    s.pop();
                    a[i]=0;
                }
                
                
            }
            if(a[i]!=0)
                    s.push(a[i]);
        }
        int size=s.size();
        vector<int> v(size);
        int j=size-1;
        while( j>=0)
        {
            v[j]=s.top();
            s.pop();
            j--;
        }
        
        return v;
    }
};