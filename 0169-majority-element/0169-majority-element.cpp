class Solution {
public:
    int majorityElement(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int n=nums.size();
        int mid=(n-1)/2;
        return nums[mid];
    }
};