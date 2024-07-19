class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        int low=1, high=maxi(a);
        
        while(low<high)
        {
            int mid=(low+high)/2;
          long long  totalhrs=func(a,mid);
            
            if(totalhrs<=h){
        
                  high=mid;
                
            } 
            else 
                low=mid+1;
            
        }
        return low;
        
    }
    int func(vector<int>& a, int pile)
    {
        long long totalhrs=0;
        for(int i=0;i<a.size();i++)
        {
            totalhrs+= ceil((double)a[i]/(double)pile);
            
        }
        return totalhrs;
    }
    int maxi(vector<int>& a)
    {
        int maxx=INT_MIN;
        for(int i=0;i<a.size();i++)
        {
            maxx=max(maxx, a[i]);
        }
        return maxx;
    }
};