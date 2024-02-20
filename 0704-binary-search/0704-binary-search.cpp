class Solution {
public:
    int search(vector<int>& n, int t) {
        int l=0;
        int r=n.size()-1;
        if(n.size()==1)
        {
            if(n[0]==t)
                return 0;
        }
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(n[mid]==t)
                return mid;
            else if(n[mid]>t)
                r=mid-1;
            else 
                l=mid+1;
            
        }
        return -1;
    }
};