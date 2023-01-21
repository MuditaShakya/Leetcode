class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) { 
        int l=n.size(); vector<int> ans;
        int temp=1; int i;
        for( i=0;i<l;i++)
        {
            ans.push_back(temp);
            temp=temp*n[i];
        }
         temp=1;
        for( i=l-1;i>=0;i--)
        {  ans[i]=ans[i]*temp;
            temp=temp*n[i];
        }
      return ans;
        
    }
};