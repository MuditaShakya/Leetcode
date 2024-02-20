class Solution {
public:
    
    int lowerbound( vector<int>& a, int t)
    {
        int l=0; int r=a.size()-1;
        int ans=-1;
        int mid=l+(r-l)/2;
        
        while(l<=r)
        {
            if(a[mid]==t){
                ans=mid;
            r=mid-1;
            }
            else if(a[mid]> t)
                r=mid-1;
            else
                l=mid+1;
            
            mid=l+(r-l)/2;
        }
        return ans;
        
        
    }
    
      int upperbound( vector<int>& a, int t)
    {
        int l=0; int r=a.size()-1;
        int ans=-1;
        int mid=l+(r-l)/2;
        
        while(l<=r)
        {
            if(a[mid]==t){
                ans=mid;
            l=mid+1;
            }
            else if(a[mid]> t)
                r=mid-1;
            else
                l=mid+1;
            
            mid=l+(r-l)/2;
        }
        return ans;
      }
    vector<int> searchRange(vector<int>& a, int t) {
        vector<int> v;
        v.push_back(lowerbound(a, t));
        v.push_back(upperbound(a,t));
        return v;
    }
};