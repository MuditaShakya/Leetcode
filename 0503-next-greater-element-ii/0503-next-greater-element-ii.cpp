class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        stack<int> s;
        
        int n=a.size();
        vector<int> v(n,-1);
        for(int i=2*n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=a[i%n])
                s.pop();
            
            if(!s.empty()) 
                v[i%n]=s.top();
            
            s.push(a[i%n]);
        }
        return v;
    }
}; 