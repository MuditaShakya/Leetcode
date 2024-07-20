class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
       int l=0, h=a.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            int missing=a[mid]-(mid+1); //eg 4. 4-3=1  so 1 no. is missing.
            if(missing<k)
                l=mid+1;
            else h=mid-1;
        }
        return l+k;
    }
};