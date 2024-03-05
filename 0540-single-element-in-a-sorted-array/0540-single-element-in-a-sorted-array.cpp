class Solution {
public:
    int singleNonDuplicate(vector<int>& n) {
        if(n.size()==1)
            return 1;
        int l=1;
        int r=n.size()-2;
        int mid;
        int nn=n.size()-1;
        if(n[0]!=n[1]) return n[0];
        if(n[nn] !=n[r]) return n[nn]; 
        while(l<=r)
        {
            mid=(l+r)/2;
            if(n[mid]!=n[mid-1] && n[mid]!=n[mid+1])
            {
                return n[mid];
            }
            else if(n[mid+1]==n[mid] && mid%2==0 or n[mid-1]==n[mid] && mid%2!=0)
            {
               l=mid+1;
            }
            else
            {
                    r=mid-1;
            }
            
                
        }
        return -1;
    }
};