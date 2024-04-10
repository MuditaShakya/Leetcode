class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        vector<int> ans(a.size(),0);
        int pos=0; int neg=1;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>0)
            {   ans[pos]=a[i];
             pos+=2;
            }
            else if(a[i]<0){
                ans[neg]=a[i];
            neg+=2;
            }
            
        }
        return ans;
    }
};