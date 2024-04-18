class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
        vector<int> ans;
        for(int i=0;i<n1.size();i++)
        {
            int ele=n1[i];
            int t=func(ele, n2);
            ans.push_back(t);
        }
        return ans;
    }
    int func(int ele, vector<int> n2)
    {
        stack<int> s;
       int i=n2.size()-1;
        while(n2[i]!=ele)
        {
            s.push(n2[i]);
            i--;
        }
        if(s.empty()==true)
            return -1;
        while(!s.empty() && s.top()<=ele)
        {
            s.pop();
        }
        if(s.empty()==true)
            return -1;
        return s.top();
    }
};