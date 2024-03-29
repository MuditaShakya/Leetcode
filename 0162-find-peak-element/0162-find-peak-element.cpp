class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n=a.size();
        int l=0; int r=n-1;
    
        while(l<r)
        {
            int mid=l+(r-l)/2;
           if(a[mid]<a[mid+1])
               l=mid+1;
            else
                r=mid;
        }
        return l;
       
    }
};