class Solution {
public: //formula nCr 
    vector<int> generateRow(int row)
    {
        long long ans=1;
        vector<int> ansrow ;
        ansrow.push_back(ans);
        for(int col=1;col<row;col++)
        {
            ans=ans*(row-col);
            ans=ans/col;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int row) {
        vector<vector<int>> triangle;
        for(int i=1;i<=row;i++)
        { 
            triangle.push_back(generateRow(i));
        }
        return triangle;
    }
};