class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& a) {
        int pos=0; int neg=1;
        vector<int> ans(a.size(), 0);
        for(int i=0;i<a.size();i++)
        {
            if(a[i]%2==0)
            {
                ans[pos]=a[i];
                pos+=2;
            }
            else{
                ans[neg]=a[i];
                neg+=2;
            }
        }
        return ans;
    }
};