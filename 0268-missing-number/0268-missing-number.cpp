class Solution {
public:
    int missingNumber(vector<int>& a) {
        sort(a.begin(), a.end());
        int i;
        for( i=0;i<a.size();i++)
        {
            if(a[i]!=i)
                return i;
        }
        return i;
    }
};