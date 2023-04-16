class Solution {
public:
    int search(vector<int>& nums, int t) {
        int l=nums.size();
    int minIdx= findMin(nums);
      int a=  binary(nums, t, 0, minIdx-1);
      int b=   binary(nums, t, minIdx, l-1);
     if(a>=b) return a ;
        else return b;
        
    }
    int findMin(vector<int>& n) {
        int N=n.size();
        int start=0, end=n.size()-1;
        if(n[end]>=n[0]) return n[0];
        while(start<=end)
        {
            int mid=(start+end)/2;
            int prev=(mid+N-1)%N;
            int next=(mid+1)%N;
            
            if(n[mid]<=n[prev] && n[mid]<=n[next])
                return(mid);
            else if(n[0]<=n[mid])
                start=mid+1;
            else
                end=mid-1;
        }
        return(-1);
    }
    
    int binary(vector<int>& a, int t, int s, int e)
    {
         while(s<=e)
        {
            int mid=(s+e)/2;
        
            
            if(a[mid]==t)
                return(mid);
            else if(a[mid]<t)
                s=mid+1;
            else
                e=mid-1;
    } return(-1);
    }
};