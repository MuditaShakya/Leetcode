class Solution {
public:
    int minDistance(string s1, string s2) {
 int m=s1.size();
        int n=s2.size();
            int dp[m+1][n+1];
        dp[0][0]=0;
        for(int i=1;i<=n;i++)
        {
            dp[0][i]=dp[0][i-1]+1;
        }
 
         for(int j=1;j<=m;j++)
        { 
            dp[j][0]=dp[j-1][0]+1;
            
        }
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s1[i-1]!=s2[j-1])
                {
                    int p=min(dp[i-1][j], dp[i][j-1]);
                dp[i][j]=1+min(dp[i-1][j-1],p);
                               }
                else
                    dp[i][j]= dp[i-1][j-1];
            }
        }
        return dp[m][n];
    }
};