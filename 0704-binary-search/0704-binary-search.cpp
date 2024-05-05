class Solution {
public:
    int search(vector<int>& a, int t) {
        int n=a.size();
       
        int l=0, r=n-1;
         int mid=(l+r)/2;
        if(a.size()==1)
        {
            if(a[0]==t)
                return 0;
        }
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]==t)
                return mid;
            else if(a[mid]>t)
                r=mid-1;
            else
                l=mid+1;
        }
        return -1;
        
    }
};