class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& a) {
        int ans=0;
        int n=a.size();
       
        for(int i=0;i<n-1;i++)
        { 
             int p=a[i][0];
            int q=a[i][1];
            int r=a[i+1][0];
            int s=a[i+1][1];
            ans=ans+max(abs(p-r), abs(q-s));
        }
        return ans;
        
    }
};