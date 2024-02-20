
class Solution {
public:
    int maxSubArray(vector<int>& n) {
        int csum=n[0];
        int osum=n[0];
        int i=1;
        while(i<n.size())
        {
            if(csum>0)
            {
                csum=csum+n[i];
            }
                else
                    csum=n[i];
            if(csum>osum)
                osum=csum;
            i++;
        }
        return osum;
    }
};




