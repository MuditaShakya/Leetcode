class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
         int l=0;
        int r=a.size()-1;
        int mid;
        vector<int> v;
        int ans=-1;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(a[mid]==t)
            {
                ans=mid;
                r=mid-1;
            }
               
            else if(a[mid]<t)
                l=mid+1;
            else
                r=mid-1;
            
        }
        v.push_back(ans);
        ans=-1;
        
           l=0;
         r=a.size()-1;
        
        
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(a[mid]==t)
            {
                ans=mid;
             l=mid+1;
            }
               
            else if(a[mid]<t)
                l=mid+1;
            else
                r=mid-1;
            
        }
         v.push_back(ans);
        return v;
    }
};