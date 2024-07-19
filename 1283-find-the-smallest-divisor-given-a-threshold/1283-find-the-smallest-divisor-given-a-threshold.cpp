class Solution {
public:
    int smallestDivisor(vector<int>& a, int threshold) {
        int low=1, high=maxi(a);
        while(low<=high)
        {
            int mid=(low+high)/2;
            int sum=func(a, mid);
             if(sum<=threshold)
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
    int func(vector<int>& a,int divisor)
    {
        int sum=0;
        for(int i=0;i<a.size();i++)
        {
            int t=ceil((double)a[i]/divisor);
            sum=sum+t;
        } 
        return sum;
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