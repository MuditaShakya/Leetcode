class Solution {
public:
    vector<int> createTargetArray(vector<int>& n, vector<int>& idx) {
        vector<int> t;
        for(int i=0;i<n.size();i++)
        {
            int j=idx[i];
            t.insert(t.begin()+j, n[i]);
        }
        return t;
    }
};