class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ec) {
        int max=0;
        for(int i=0;i<c.size(); i++)
        {
            if(c[i]>max)
                max=c[i];
            
        }
        vector<bool> b;
        for(int j=0;j<c.size();j++)
        {
            int n=ec+c[j];
            if(n>=max)
                b.push_back(true);
            else{
                b.push_back(false);
            }
        }
        return b;
    }
};