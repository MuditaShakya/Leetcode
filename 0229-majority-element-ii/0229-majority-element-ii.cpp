class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c=1, max=n/3; vector<int> ans;
        sort(nums.begin(), nums.end());
        int i=0;
        while(i<n)
            { int a=nums[i]; int j=i+1;
             while(j<n && nums[j]==a )
             {
                 c++;
                 j++;
             }
             
                 if(c>max)
                     ans.push_back(nums[i]);
             i=j;
             c=1;
            
        }
        return ans;
    }
};