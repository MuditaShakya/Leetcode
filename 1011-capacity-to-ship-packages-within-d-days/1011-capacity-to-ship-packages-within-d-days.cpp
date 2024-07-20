class Solution {
public:
    int shipWithinDays(vector<int>& a, int days) {
        int sum=0;
       for(int i=0;i<a.size();i++) 
       {
           sum=sum+a[i];
       }
        int low=*max_element(a.begin(),a.end()), high=sum;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            int d=func(a, mid);
            if(d<=days)
            {
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
    int func(vector<int> a, int capacity)
    {
        int days=1;
        int load=0; 
        for(int i=0;i<a.size();i++)
        {  
            if(load+a[i]>capacity)
            {
               days=days+1;
                load=a[i];
            }
            else
            {
             load+=a[i];
            } 
            
        }
        return days;
    }
};