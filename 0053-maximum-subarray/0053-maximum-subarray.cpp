class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int   osum=nums[0];
        int csum=nums[0];
        int i=1;
        while(i<nums.size())
        {
            if(csum>0)
            csum=csum+nums[i];
            else
                csum=nums[i];
            if(csum>osum)
                osum=csum;
        i++;
        }
        return osum;
    }
};