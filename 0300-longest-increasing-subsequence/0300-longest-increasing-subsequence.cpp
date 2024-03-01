class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n=a.size();
        vector<int> temp(n,1);
        int maxi=0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j])
                {
                    temp[i]=max(temp[j]+1, temp[i]);
                    if(temp[i]>maxi)
                        maxi=temp[i];
                }
            }
        }
        if(maxi==0) return 1;
        return maxi;
    }
};