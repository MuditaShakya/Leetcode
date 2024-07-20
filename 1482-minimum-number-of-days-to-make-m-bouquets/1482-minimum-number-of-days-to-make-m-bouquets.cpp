class Solution {
public:
    int minDays(vector<int>& a, int m, int k) {
        
        int low = *min_element(a.begin(), a.end());
        int high = *max_element(a.begin(), a.end());
        int ans=-1;
       
        while(low<=high)
        {
            long long mid=(low+high)/2;
            bool b=possible(a,mid,m,k);
            if(b==true){
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
            
        }
        return ans;
        
    }
    bool possible(vector<int>& a,int day,int m, int k)
    {
        int ctr=0;
        int no_ofbou=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<=day)
            {
                ctr++;
            }
            else{
                no_ofbou+=(ctr/k);
                ctr=0;
            }
                
        }
       no_ofbou+=(ctr/k);
        if(no_ofbou>=m)
            return true;
        return false;
    }

};