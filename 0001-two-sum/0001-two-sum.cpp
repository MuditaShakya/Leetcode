class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        map<int, int> mp;
        vector<int> v;
        for(int i=0;i<a.size();i++)
        {
          int t=target-a[i];
            if(mp.count(t))
            {
                v.push_back(i);
                v.push_back(mp[t]);
                break;
            }
            mp[a[i]]=i;
        }
        return v;
        
    }
};