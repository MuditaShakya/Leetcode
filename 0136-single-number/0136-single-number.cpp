
class Solution {
public:
    int singleNumber(vector<int>& nums) { int j=0;
        if(nums.size()==1)
            return nums[0];
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1])
            {
                i=i+1;
            }
            else{ j=nums[i]; break;}
        } return j;
    }
};