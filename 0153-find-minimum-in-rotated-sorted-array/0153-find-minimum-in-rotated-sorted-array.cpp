class Solution {
public:
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
                return(n[mid]);
            else if(n[0]<=n[mid])
                start=mid+1;
            else
                end=mid-1;
        }
        return(-1);
    
    }
};