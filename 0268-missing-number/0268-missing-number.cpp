class Solution {
public:
    int missingNumber(vector<int>& a) {
        int l=a.size(); int j=1; 
        while(j<=l) { 
            int c=0;
        for(int i=0;i<l;i++)
        {
            if(a[i]==j){
                
                j++;
                c++;
            }
        }
            if(c==0)
                return j;
            
            
        }
        
        return 0;
    }
};