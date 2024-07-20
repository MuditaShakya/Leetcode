class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<=k)
                k++;
            else break;
        }
        return k;
    }
};