class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int n=m.size();
        int nn=m[0].size();
        int r=0;
        int c=nn-1;
        while(c>=0 && r<n)
        {
            if(t==m[r][c])
                return true;
            else if(t<m[r][c]){
                c--;
            }
            else
                r++;
            
        }
        return false;
    }
};
