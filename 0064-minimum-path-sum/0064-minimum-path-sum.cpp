class Solution {
public:
    int minPathSum(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
     int v[n][m];
        v[0][0]=a[0][0];
        for(int i=1;i<m;i++)
        {
            v[0][i]= v[0][i-1]+a[0][i];
        }
         for(int i=1;i<n;i++)
        {
            v[i][0]= v[i-1][0]+a[i][0];
             
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                v[i][j]=a[i][j]+min(v[i][j-1], v[i-1][j]);
            }
        }
        return v[n-1][m-1];
        
      
        
    }
};