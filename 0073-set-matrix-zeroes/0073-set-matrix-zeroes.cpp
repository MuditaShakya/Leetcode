class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int> x;
        vector<int> y;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
               if(mat[i][j]==0) {
                  x.push_back(i);
                y.push_back(j);
               }
            }
        
        for(int i=0;i<x.size();i++)
        {
            int id=x[i];
            for(int j=0;j<m;j++)
            {
                mat[id][j]=0;
            }
        }
        
         for(int i=0;i<y.size();i++)
        {
            int id=y[i];
            for(int j=0;j<n;j++)
            {
                mat[j][id]=0;
            }
        }
        
            
    }
};