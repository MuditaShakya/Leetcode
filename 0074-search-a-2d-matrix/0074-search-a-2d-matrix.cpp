class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int n=m.size();
        int nn=m[0].size();
        
       for(int i=0;i<n;i++)
       {
           
          if(m[i][0] <=t && t<=m[i][nn-1])
         return binarySearch(m[i], t);
       }
        return false;
    }
    bool binarySearch(vector<int> &a, int t)
    {
        int n=a.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[mid]==t)
                return true;
            else if(a[mid]>t)
                high=mid-1;
            else low=mid+1;
        }
        return false;      
    }
};