class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        map<int,int> m;
        for(int i=0;i<a.size(); i++)
            m[a[i]]++;
        
        for(auto it: m)
        {
            if(it.second>1)
                return true;
        } return false;
    }
};