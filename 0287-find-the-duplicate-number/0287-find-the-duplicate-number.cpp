class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<int> b;
    int i=1; int k=0; int item=nums[k];
        while(i<n)
        {
            if(nums[i]==item)
            {
             return item; break;
            } 
            else {
                item=nums[i];
                
            } i++;
        } 
    return NULL;
    }
};