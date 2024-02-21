class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n=a.size();
        int l=0; int r=n-1;
        if(n==1)
            return 0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(mid-1>=0 && a[mid-1]<a[mid] &&  mid+1<n && a[mid]>a[mid+1])
                return mid;
            else if(mid+1<n && a[mid]>a[mid+1])
            {
                r=mid-1;
            }
            else 
                l=mid+1;
            
            
        }
        if(a[0]>a[1])
            return 0;
        else return (n-1);
       
    }
};