class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        map<int, int> mp;
        vector<int> v;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            int r=t-a[i];
            if(mp.count(r))
            {
                v.push_back(i);
                v.push_back(mp[r]);
                break;
            }
            mp[a[i]]=i;
        }
        return v;
    }
};

// if element exists in map then return element else store it in map