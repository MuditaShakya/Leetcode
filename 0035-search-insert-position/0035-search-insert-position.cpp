class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int l=0;
        int r=nums.size()-1;
        int mid;
        
        while(l<=r)
        {
            
            mid=l+(r-l)/2;
            if(nums[mid]==t)
                return mid;
            
            else if(nums[mid]<t)
                l=mid+1;
            else
                r=mid-1;
            
        }
        return l;
    }
};