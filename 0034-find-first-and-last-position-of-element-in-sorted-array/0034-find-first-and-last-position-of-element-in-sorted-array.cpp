class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
          vector<int> v;
       int x=search(a, t, true);
        int y=search(a, t, false);
        v.push_back(x);
        v.push_back(y);
        return v;
        
    }
    int search(vector<int>& a, int t, bool issearchingleft)
    {
        int l=0;
        int r=a.size()-1;
        int mid;
      
        int ans=-1;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            
               
             if(a[mid]<t)
                l=mid+1;
            else if(a[mid]>t)
                r=mid-1;
            else{
                 ans=mid;
                if(issearchingleft)
                r=mid-1;
            
                else
                    l=mid+1;
                
            }
                
            
        }
        return ans;
    }
};