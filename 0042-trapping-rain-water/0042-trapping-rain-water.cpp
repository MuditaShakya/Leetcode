class Solution {
public:
    int trap(vector<int>& h) {
        int mxl[h.size()]; //max on left
        int  mxr[h.size()];
        int water[h.size()];
        mxl[0]=h[0];
        for(int i=1;i<h.size();i++)
        {
            mxl[i]=max(mxl[i-1], h[i]);
        }
        mxr[h.size()-1]=h[h.size()-1];
         for(int i=h.size()-2;i>=0;i--)
        {
            mxr[i]=max(mxr[i+1], h[i]);
        }
         for(int i=0;i<h.size();i++)
        {
            water[i]=min(mxl[i], mxr[i])-h[i];
        }
        int sum=0;
         for(int i=0;i<h.size();i++)
        {
            sum=sum+water[i];
        }
        return sum;
    }
};