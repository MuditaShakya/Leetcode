class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int s=nums.size();
        vector<int> b;
        for(int i=0;i<s;i++)
        {
            int a=nums[i];
            int c=nums[a];
            b.push_back(c);
        }
        return b;
    }
};