class Solution {
public:
    vector<int> getRow(int r) {
        r=r+1;
        vector<int> ans;
        long long temp=1;
        ans.push_back(temp);
        for(int i=1;i<r;i++)
        {
         temp=temp*(r-i);
            temp=temp/i;
            ans.push_back(temp);
        }
        return ans;
    }
};