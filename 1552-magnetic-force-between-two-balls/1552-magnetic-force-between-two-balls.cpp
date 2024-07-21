class Solution {
public:
    int maxDistance(vector<int>& a, int m) {
        sort(a.begin(), a.end());
        int n=a.size();
       int low=1, high=a[n-1]-a[0];
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(canBePlaced(a,m,mid)==true)
                low=mid+1;
            else
                high=mid-1;
            
        }
        return high;
        
    }
    bool canBePlaced(vector<int> a, int m, int dist)
    {
        int cnt=1;
        int last=a[0];
        for(int i=0;i<a.size();i++)
        {
            if(a[i]-last>=dist)
            {
                cnt++;
                last=a[i];
            }
            if(cnt>=m)
                return true;
        }
        return false;
    }
};