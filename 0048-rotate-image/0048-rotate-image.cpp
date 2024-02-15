class Solution {
public:
    // 1. transpose 2. reverse each row
    void rotate(vector<vector<int>>& m) {
        for(int i=0;i<m.size();i++)
            for(int j=0;j<i;j++)
                swap(m[i][j], m[j][i]);
        
        for(int k=0;k<m.size();k++)
            reverse(m[k].begin(), m[k].end());
        
        
    }
};