class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int sum=0;
        int ans=a[0];
        for(int i=0;i<a.size();i++)
        {
            sum=sum+a[i];
            if(sum>ans)
                ans=sum;
            if(sum<0)
                sum=0;
        }
        return ans;
    }
};