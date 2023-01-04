class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int l=nums.size();
    
    vector<int> b; 
    int k=n; int j;
       for (j=0;j<n;j++)
    {
        b.push_back(nums[j]);
        if(k!=l){
        b.push_back(nums[k]);
        k++;}
    } return b;
    }
};