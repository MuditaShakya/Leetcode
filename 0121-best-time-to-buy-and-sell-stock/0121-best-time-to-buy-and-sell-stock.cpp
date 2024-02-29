class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int profit=0;
        int ans=0;
        for(auto i: prices)
        {
            mini=min(mini, i);
            profit=i-mini;
            ans=max(profit, ans);
        }
        return ans;
    }
};