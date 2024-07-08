class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0; int neg=1;
        vector<int> n(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                n[pos]=nums[i];
                pos+=2;
            }
          else if(nums[i]<0)
            {
                n[neg]=nums[i];
                neg+=2;
            }
        }
        return n;
        
    }
};